/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:51:35 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/16 00:10:58 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*f_elm;

	if (!lst || !f)
		return (NULL);
	f_elm = f(lst);
	if ((new = ft_lstnew(f_elm->content, f_elm->content_size)))
	{
		tmp = new;
		lst = lst->next;
		while (lst != NULL)
		{
			f_elm = f(lst);
			if (!(tmp->next = ft_lstnew(f_elm->content, f_elm->content_size)))
			{
				free(new);
				return (NULL);
			}
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (new);
}
