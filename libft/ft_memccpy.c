/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:33:22 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/03 12:54:40 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t						i;
	unsigned char				*dst;
	const unsigned char			*sr;

	dst = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	i = 0;
	while (i < n && sr[i] != (unsigned char)c)
	{
		dst[i] = sr[i];
		i++;
	}
	if (i < n)
		return (&dst[i + 1]);
	return (NULL);
}
