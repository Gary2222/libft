/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:49:08 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/04 12:23:47 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddback(t_list **alst, t_list *new)
{
	if ((*alst)->next == NULL)
		(*alst)->next = new;
	else
		ft_lstadd(&(*alst)->next, new);
}
