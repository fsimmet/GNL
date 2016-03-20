/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:09:12 by fsimmet           #+#    #+#             */
/*   Updated: 2015/11/30 19:35:55 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	l;

	l = ft_strlen(s1);
	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < n && s1[i])
	{
		j = 0;
		while (s2[j] && s2[j] == s1[i + j] && i + j < n)
			j++;
		if (j == ft_strlen(s2))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
