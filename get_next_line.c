/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 12:43:24 by fsimmet           #+#    #+#             */
/*   Updated: 2016/02/16 12:17:04 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "string.h"

static int	get_buf(int const fd, char **lines, char **res)
{
	ssize_t		red;
	char		buf[BUFF_SIZE];
	int			i;
	char		*tmp;

	while ((red = read(fd, buf, BUFF_SIZE)))
	{
		if (red == -1)
			return (-1);
		buf[red] = '\0';
		if (!ft_strchr(buf, '\n'))
			*lines = ft_strfjoin(*lines, buf, 1);
		else
		{
			i = 0;
			while (buf[i] != '\0' && buf[i] != '\n')
				*lines = ft_strfjoin(*lines, ft_chartostar(buf[i++]), 3);
			tmp = ft_strchr(buf, '\n');
			res[fd] = ft_strdup(&tmp[1]);
			return (1);
		}
	}
	return ((*lines) ? 1 : red);
}

int			get_next_line(int const fd, char **line)
{
	size_t		i;
	static char	*res[FDMAX];
	char		*tmp;

	if (fd < 0 || fd > FDMAX || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (*line)
		*line = NULL;
	if (res[fd] && res[fd][0])
	{
		i = 0;
		while (res[fd][i] && res[fd][i] != '\n')
			*line = ft_strfjoin(*line, ft_chartostar(res[fd][i++]), 3);
		if ((tmp = ft_strchr(&res[fd][i], '\n')))
		{
			tmp = ft_strchr(&res[fd][i], '\n');
			res[fd] = ft_strdup(&tmp[1]);
			return (1);
		}
		else
			res[fd] = NULL;
	}
	return (get_buf(fd, line, res));
}
