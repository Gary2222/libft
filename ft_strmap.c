/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:07:59 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 21:08:02 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	if (!s || !f || !(new = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(new[i]);
		i++;
	}
	return (new);
}
