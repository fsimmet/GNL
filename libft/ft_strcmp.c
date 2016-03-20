/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:19:26 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/01 16:35:14 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t s1_len;
	size_t s2_len;
	size_t n;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	n = (s1_len > s2_len) ? s1_len : s2_len;
	n = n + 1;
	return (ft_strncmp(s1, s2, n));
}
