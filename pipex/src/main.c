/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:37:56 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 18:09:22 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static pid_t	fork_and_exec_first(int fd_in, int pipefd[2], char *cmd,
char **envp)
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		ft_error("Fork failed");
	if (pid == 0)
	{
		close(pipefd[0]);
		exec_cmd(cmd, fd_in, pipefd[1], envp);
	}
	return (pid);
}

static pid_t	fork_and_exec_second(int pipefd[2], char *outfile,
char *cmd, char **envp)
{
	pid_t	pid;
	int		fd_out;

	pid = fork();
	if (pid == -1)
		ft_error("Fork failed");
	if (pid == 0)
	{
		close(pipefd[1]);
		fd_out = open(outfile, O_CREAT | O_WRONLY | O_TRUNC, 0644);
		if (fd_out < 0)
		{
			perror(outfile);
			exit(1);
		}
		exec_cmd(cmd, pipefd[0], fd_out, envp);
	}
	return (pid);
}

static int	run_pipeline(char **argv, char **envp)
{
	int		pipefd[2];
	pid_t	pid1;
	pid_t	pid2;
	int		fd_in;

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		perror(argv[1]);
		return (handle_no_input(argv, envp));
	}
	if (pipe(pipefd) == -1)
		ft_error("Pipe failed");
	pid1 = fork_and_exec_first(fd_in, pipefd, argv[2], envp);
	pid2 = fork_and_exec_second(pipefd, argv[4], argv[3], envp);
	cleanup_and_wait(pid1, pid2, pipefd, fd_in);
	return (1);
}

int	main(int argc, char **argv, char **envp)
{
	if (check_args(argc))
		return (1);
	return (run_pipeline(argv, envp));
}
