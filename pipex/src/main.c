#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>

static void	ft_error(char *msg)
{
	ft_putstr_fd("pipex: ", 2);
	ft_putendl_fd(msg, 2);
	exit(EXIT_FAILURE);
}

static void	free_split(char **arr)
{
	int i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static void	exec_cmd(char *cmd, int fd_in, int fd_out)
{
	char **args = ft_split(cmd, ' ');
	if (!args)
		ft_error("Memory allocation failed");

	if (dup2(fd_in, STDIN_FILENO) == -1)
		ft_error("dup2 input failed");
	if (dup2(fd_out, STDOUT_FILENO) == -1)
		ft_error("dup2 output failed");

	close(fd_in);
	close(fd_out);

	execvp(args[0], args);

	ft_putstr_fd("pipex: command not found: ", 2);
	ft_putendl_fd(args[0], 2);
	free_split(args);
	exit(127);
}

int	main(int argc, char **argv)
{
	int		pipefd[2];
	pid_t	pid1;
	pid_t	pid2;
	int		fd_in;
	int		fd_out;

	if (argc != 5)
	{
		ft_putstr_fd("Usage: ./pipex file1 cmd1 cmd2 file2\n", 2);
		return (1);
	}

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
		ft_error("Input file error");

	fd_out = open(argv[4], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_out < 0)
		ft_error("Output file error");

	if (pipe(pipefd) == -1)
		ft_error("Pipe failed");

	pid1 = fork();
	if (pid1 == -1)
		ft_error("Fork failed");

	if (pid1 == 0)
	{
		close(pipefd[0]);
		exec_cmd(argv[2], fd_in, pipefd[1]);
	}

	pid2 = fork();
	if (pid2 == -1)
		ft_error("Fork failed");

	if (pid2 == 0)
	{
		close(pipefd[1]);
		exec_cmd(argv[3], pipefd[0], fd_out);
	}

	close(pipefd[0]);
	close(pipefd[1]);
	close(fd_in);
	close(fd_out);

	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}
