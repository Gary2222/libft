/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 22:08:50 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 22:09:34 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char*)dest;
	while (n > 0)
	{
		*temp = (unsigned char)c;
		n--;
		temp++;
	}
	return (dest);
}
