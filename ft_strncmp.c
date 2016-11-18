/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:08:27 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 21:08:28 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char*)s1;
	t2 = (unsigned char*)s2;
	i = 0;
	while ((t1 && t1[i]) && (t2 && t2[i]) && t1[i] == t2[i] && i < n)
		i++;
	if (i != n)
		return (t1[i] - t2[i]);
	return (0);
}
