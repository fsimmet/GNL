/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:31:43 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/02 11:17:01 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dst;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dst = i;
	while (src[i - dst] && size - 1 > i)
	{
		dest[i] = src[i - dst];
		i++;
	}
	if (size > dst)
		dest[i] = '\0';
	return (dst + ft_strlen(src));
}
