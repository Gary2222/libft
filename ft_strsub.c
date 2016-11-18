/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:09:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/10 16:52:55 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*section;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (((section = ft_strnew(len)) == NULL) || (start + len) > ft_strlen(s))
		return (NULL);
	while (s[start] && section && len > 0)
	{
		section[i] = s[start];
		start++;
		i++;
		len--;
		if (start > ft_strlen(s))
			return (NULL);
	}
	section[i] = '\0';
	return (section);
}
