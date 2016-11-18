/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 23:20:40 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/10 16:57:01 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*cpy;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s)
		i++;
	if (i == ft_strlen(s))
		return (ft_strdup(""));
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != i)
	{
		j--;
		k++;
	}
	cpy = ft_strsub(s, i, ((ft_strlen(s) - i - k)));
	return (cpy);
}
