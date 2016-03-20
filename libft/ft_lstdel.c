/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 19:00:39 by fsimmet           #+#    #+#             */
/*   Updated: 2015/12/02 16:29:14 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*alst2;
	t_list	*nlist;

	alst2 = *alst;
	while (alst2)
	{
		nlist = alst2->next;
		del(alst2->content, alst2->content_size);
		free(alst2);
		alst2 = nlist;
	}
	*alst = NULL;
}
