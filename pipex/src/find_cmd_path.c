/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cmd_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:37:54 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 17:48:05 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*join_path_cmd(const char *path, const char *cmd)
{
	char	*tmp;
	char	*full;

	if (!path || !cmd)
		return (NULL);
	if (ft_strlen(path) > 0 && path[ft_strlen(path) - 1] == '/')
	{
		full = ft_strjoin((char *)path, (char *)cmd);
		return (full);
	}
	tmp = ft_strjoin((char *)path, "/");
	if (!tmp)
		return (NULL);
	full = ft_strjoin(tmp, (char *)cmd);
	free(tmp);
	return (full);
}

static char	*try_paths(char **paths, char *cmd)
{
	int		i;
	char	*full;

	if (!paths || !cmd)
		return (NULL);
	i = 0;
	while (paths[i])
	{
		full = join_path_cmd(paths[i], cmd);
		if (!full)
			return (NULL);
		if (access(full, X_OK) == 0)
			return (full);
		free(full);
		i++;
	}
	return (NULL);
}

char	*find_cmd_path(char *cmd, char **envp)
{
	int		i;
	char	**paths;
	char	*res;

	if (!cmd || !envp)
		return (NULL);
	if (ft_strchr(cmd, '/'))
	{
		if (access(cmd, X_OK) == 0)
			return (ft_strdup(cmd));
		return (NULL);
	}
	i = 0;
	while (envp[i] && ft_strncmp(envp[i], "PATH=", 5) != 0)
		i++;
	if (!envp[i])
		return (NULL);
	paths = ft_split(envp[i] + 5, ':');
	if (!paths)
		return (NULL);
	res = try_paths(paths, cmd);
	free_split(paths);
	return (res);
}
