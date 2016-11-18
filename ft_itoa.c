/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 21:27:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/15 17:28:58 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int nbr)
{
	char	*str;
	int		size;

	size = ft_nblen(nbr);
	if (!(str = ft_strnew(size)))
		return (NULL);
	if (nbr == 2147483647)
		ft_strdup("2147483647");
	while (nbr >= 10 || nbr <= -10)
	{
		str[size - 1] = ft_abs(nbr % 10) + '0';
		nbr = (nbr / 10);
		size--;
	}
	str[size - 1] = ft_abs(nbr % 10) + '0';
	if (size == 2)
		str[0] = '-';
	return (str);
}
