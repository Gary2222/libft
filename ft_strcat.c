/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 17:27:37 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/27 19:33:44 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	ft_strcpy(&dest[ft_strlen(dest)], src);
	return (dest);
}
