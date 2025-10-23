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

#endif
