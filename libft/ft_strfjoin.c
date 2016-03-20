/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:10:11 by fsimmet           #+#    #+#             */
/*   Updated: 2016/02/16 10:13:20 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfjoin(char *s1, char *s2, size_t i)
{
	char	*s3;

	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s3 = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (s1[0])
		s3 = ft_strcat(s3, s1);
	if (s2[0])
		s3 = ft_strcat(s3, s2);
	if (i == 1 || i == 3)
		ft_strdel(&s1);
	if (i == 2 || i == 3)
		ft_strdel(&s2);
	return (s3);
}
