/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:33:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/08 20:41:17 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		count;
	int		start;
	int		end;

	if (needle[0] == '\0')
		return ((char*)haystack);
	count = 0;
	while (haystack[count] && n > 0)
	{
		if (n < ft_strlen(needle))
			return (NULL);
		start = 0;
		end = count;
		while (haystack[end] == needle[start] && haystack[end] && needle[start])
		{
			start++;
			end++;
		}
		if (needle[start] == '\0')
			return ((char*)haystack + count);
		n--;
		count++;
	}
	return (NULL);
}
