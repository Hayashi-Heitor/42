/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:37:59 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 18:03:55 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(char *msg)
{
	ft_putstr_fd("pipex: ", 2);
	ft_putendl_fd(msg, 2);
	exit(EXIT_FAILURE);
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	cleanup_and_wait(pid_t pid1, pid_t pid2, int pipefd[2], int fd_in)
{
	int	status;

	close(pipefd[0]);
	close(pipefd[1]);
	close(fd_in);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, &status, 0);
	if (WIFEXITED(status))
		exit(WEXITSTATUS(status));
}
