/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:15:13 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/09 19:24:02 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	if (p_dst > p_src)
		while (i < len)
		{
			p_dst[len - 1] = p_src[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	return (dst);
}
