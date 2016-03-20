/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:08:23 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/03 14:24:46 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	size_t	i;
	char	*st;
	size_t	r;
	size_t	n;

	i = 0;
	r = 0;
	n = 0;
	st = (char *)str;
	while (ft_space(&st[i]))
		i++;
	if (st[i] == '+' || st[i] == '-')
	{
		if (st[i] == '-')
			n++;
		i++;
	}
	while (st[i] >= '0' && st[i] <= '9' && st)
	{
		r = r * 10 + st[i] - 48;
		i++;
	}
	return (n != 0 ? -r : r);
}
