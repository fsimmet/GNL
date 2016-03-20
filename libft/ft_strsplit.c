/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:28:09 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/03 17:11:24 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char		**ft_taballoc(char const *s, char c, size_t nb_word)
{
	char		**tab;
	size_t		line;
	size_t		nb;

	line = 0;
	tab = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (tab == NULL)
		return (NULL);
	tab[nb_word] = NULL;
	while (line < nb_word)
	{
		while (s && *s == c)
			s++;
		nb = ft_strlenword(s, c);
		tab[line] = (char *)malloc(sizeof(char ) * (nb + 1));
		tab[line][nb] = '\0';
		s = s + nb;
		line++;
	}
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	line;
	size_t	nb_word;
	size_t	nb;

	line = 0;
	if (!s)
		return (NULL);
	nb_word = ft_nbword(s, c);
	tab = ft_taballoc(s, c, nb_word);
	while (line < nb_word)
	{
		while (s && *s == c)
			s++;
		nb = ft_strlenword(s, c);
		ft_strncpy(tab[line], s, nb);
		line++;
		s = s + nb;
	}
	return (tab);
}
