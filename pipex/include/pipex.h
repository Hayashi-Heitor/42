/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:37:41 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 18:04:03 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include <errno.h>

void	ft_error(char *msg);
void	free_split(char **arr);
void	exec_cmd(char *cmd, int fd_in, int fd_out, char **envp);
char	*find_cmd_path(char *cmd, char **envp);
int		check_args(int argc);
int		handle_no_input(char **argv, char **envp);
void	cleanup_and_wait(pid_t pid1, pid_t pid2, int pipefd[2], int fd_in);

#endif
