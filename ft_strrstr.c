/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:26:47 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/02 18:08:39 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrstr(const char *big, const char *little)
{
	unsigned long	i;
	unsigned long	j;

	i = ft_strlen((char *)big) - 1;
	j = ft_strlen((char *)little) - 1;
	if (!little)
		return ((char*)big);
	if (!big)
		return (NULL);
	while (big[i] != little[j])
		i--;
	while (big[i] == little[j])
	{
		if (j == 0 && little[j] == big[i])
			return ((char *)&big[i]);
		i--;
		j--;
	}
	return (NULL);
}
