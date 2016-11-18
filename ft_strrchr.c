/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:37:14 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/04 14:42:47 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;

	temp = ft_strchr(str, '\0');
	while (temp >= str)
	{
		if (*temp == (unsigned char)c)
			return ((char*)temp);
		temp--;
	}
	return (NULL);
}
