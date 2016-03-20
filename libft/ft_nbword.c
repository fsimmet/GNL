/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:10:04 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/03 17:15:43 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbword(const char *s, char c)
{
	size_t	i;
	size_t	wd;

	i = 0;
	wd = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			wd++;
			while (s[i] != c && s[i])
				i++;
		}
		if (s[i])
			i++;
	}
	return (wd);
}
