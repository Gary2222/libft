/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:13:01 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/04 13:58:04 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char*)dst)[i] = ((char *)src)[i];
		if (((char *)dst)[i] == (char)c)
			return ((char*)dst + i + 1);
		i++;
	}
	return (0);
}
