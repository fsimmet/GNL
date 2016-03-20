/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:17:43 by fsimmet           #+#    #+#             */
/*   Updated: 2015/11/27 14:00:36 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char*)&s[i]);
	while (i >= 0)
	{
		if (c == (unsigned char)s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
