/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 12:43:24 by fsimmet           #+#    #+#             */
/*   Updated: 2016/04/14 20:26:40 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_buf(int const fd, char **lines, char **remain)
{
	ssize_t		red;
	char		buf[BUFF_SIZE + 1];
	int			i;

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
			{
				*lines = ft_strfjoin(*lines, ft_chartostar(buf[i]), 3);
				i++;
			}
			*remain = ft_strdup(&(ft_strchr(buf, '\n'))[1]);
			return (1);
		}
	}
	return ((*lines != NULL) ? 1 : red);
}

static t_fd		*get_current_fd(int const fd, t_list **fds)
{
	t_list	*tmp;
	t_fd	content;

	tmp = *fds;
	while (tmp != NULL)
	{
		if (((t_fd *)tmp->content)->fd == fd)
		{
			return (tmp->content);
		}
		tmp = tmp->next;
	}
	content.fd = fd;
	content.res = NULL;
	ft_lstadd(fds, ft_lstnew(content, sizeof(content)));
	return ((*fds)->content);
}

int			get_next_line(int const fd, char **line)
{
	size_t			i;
	static t_list	*fds = NULL;
	char			*tmp;
	t_fd			*current;

	if (line == NULL || BUFF_SIZE <= 0)
		return (-1);
	*line = NULL;
	current = get_current_fd(fd, fds);
	if (remain[fd] && remain[][0])
	{
		i = 0;
		while (remain[fd][i] && remain[fd][i] != '\n')
		{
			*line = ft_strfjoin(*line, ft_chartostar(remain[fd][i]), 3);
			i++;
		}
		if (i == 0)
			*line = ft_strnew(0);
		if ((tmp = ft_strchr(&remain[fd][i], '\n')))
		{
			remain[fd] = ft_strcpy(remain[fd], &tmp[1]);
			return (1);
		}
		remain[fd] = NULL;
	}
	return (get_buf(fd, line, &remain[fd]));
}
