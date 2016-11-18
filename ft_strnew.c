/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:09:12 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 21:09:13 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *newstr;

	if ((newstr = (char*)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	ft_strclr(newstr);
	return (newstr);
}
