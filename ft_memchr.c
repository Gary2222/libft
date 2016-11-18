/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:15:01 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/02 18:12:48 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char*)s)[i])
			return (((unsigned char*)s) + i);
		i++;
	}
	return (NULL);
}
