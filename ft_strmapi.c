/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:08:11 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 21:08:12 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!s || !f || !(new = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}
