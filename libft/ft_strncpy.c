/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:52:36 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/01 16:27:48 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = (char)src[i];
		i++;
	}
	if (n > i)
	{
		while (n > i)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
