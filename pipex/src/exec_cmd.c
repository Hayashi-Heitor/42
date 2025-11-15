/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:37:51 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 17:37:52 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec_cmd(char *cmd, int fd_in, int fd_out, char **envp)
{
	char	**args;
	char	*cmd_path;

	args = ft_split(cmd, ' ');
	if (!args)
		ft_error("Memory allocation failed");
	cmd_path = find_cmd_path(args[0], envp);
	if (!cmd_path)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(args[0], 2);
		free_split(args);
		exit(127);
	}
	if (dup2(fd_in, STDIN_FILENO) == -1)
		ft_error("dup2 input failed");
	if (dup2(fd_out, STDOUT_FILENO) == -1)
		ft_error("dup2 output failed");
	close(fd_in);
	close(fd_out);
	execve(cmd_path, args, envp);
	perror("pipex");
	free(cmd_path);
	free_split(args);
	exit(EXIT_FAILURE);
}
