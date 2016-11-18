/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:09:54 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/03 17:41:10 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlist;

	while (*alst)
	{
		nextlist = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = nextlist;
	}
}
