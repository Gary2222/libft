/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:33:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/04 15:06:34 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	j;

	j = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, j) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
