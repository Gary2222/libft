/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 22:01:30 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/10 15:34:24 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*both;

	if (!s1 || !s2)
		return (NULL);
	if ((both = ft_strnew((ft_strlen(s1) + ft_strlen(s2)))) == NULL)
		return (NULL);
	ft_strcpy(both, s1);
	ft_strcat(both, s2);
	return (both);
}
