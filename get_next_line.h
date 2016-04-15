/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 12:43:38 by fsimmet           #+#    #+#             */
/*   Updated: 2016/04/15 18:56:26 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# define BUFF_SIZE 1024

typedef struct	s_fd
{
	int			fd;
	char		*res;
}				t_fd;

int				get_next_line(int const fd, char **line);

#endif
