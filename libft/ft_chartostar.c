/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartostar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:29:11 by fsimmet           #+#    #+#             */
/*   Updated: 2016/03/13 05:57:05 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chartostar(char c)
{
	char *s;

	s = ft_strnew(1);
	s[0] = c;
	s[1] = '\0';
	return (s);
}
