/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:02:43 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 18:09:37 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	child_exec_write(char *outfile, int in_fd, char *cmd, char **envp)
{
	int	fd_out;

	fd_out = open(outfile, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_out < 0)
	{
		perror(outfile);
		exit(1);
	}
	exec_cmd(cmd, in_fd, fd_out, envp);
}

int	check_args(int argc)
{
	if (argc != 5)
	{
		ft_putstr_fd("Usage: ./pipex file1 cmd1 cmd2 file2\n", 2);
		return (1);
	}
	return (0);
}

int	handle_no_input(char **argv, char **envp)
{
	int		dummy_pipe[2];
	pid_t	pid;
	int		status;

	if (pipe(dummy_pipe) == -1)
		ft_error("pipe failed");
	close(dummy_pipe[1]);
	pid = fork();
	if (pid == -1)
		ft_error("fork failed");
	if (pid == 0)
	{
		child_exec_write(argv[4], dummy_pipe[0], argv[3], envp);
	}
	close(dummy_pipe[0]);
	waitpid(pid, &status, 0);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	return (1);
}
