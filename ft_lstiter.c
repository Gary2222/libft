/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:04:46 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/03 18:52:38 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *nextlist;

	if (lst)
	{
		while (lst)
		{
			nextlist = lst->next;
			f(lst);
			lst = nextlist;
		}
	}
}
