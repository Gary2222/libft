/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:46:56 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/02 16:01:29 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (i > size - 1)
		return (size + ft_strlen(src));
	while ((i + j < size - 1) && src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (i + ft_strlen(src));
}
