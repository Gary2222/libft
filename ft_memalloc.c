/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 20:51:36 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 20:51:42 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = (void*)malloc(size)) == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return ((void*)mem);
}
