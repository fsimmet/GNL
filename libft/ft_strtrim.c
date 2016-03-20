/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:33:17 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/02 16:36:51 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strflen(char const *s)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
		i--;
	return (ft_strlen(s) - i);
}

static size_t	ft_strdlen(char const *s)
{
	size_t	i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*s2;
	size_t	j;

	j = ft_strlen(s);
	if (s)
	{
		if (ft_strdlen(s) == 0 && ft_strflen(s) == 1)
			return (ft_strdup(s));
		s2 = ft_strnew(j);
		if (ft_strdlen(s) == ft_strlen(s))
			return (s2);
		s2 = ft_strsub(s, ft_strdlen(s), j - ft_strflen(s) - ft_strdlen(s) + 1);
		return (s2);
	}
	return (NULL);
}
