/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 00:55:04 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/01 16:13:33 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countword(char const *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i += 1;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char		*ft_dup(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	if (!(word = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len;

	if (!s || !c)
		return (NULL);
	i = -1;
	len = ft_countword(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * len + 1)))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
			tab[++i] = ft_dup(s, c);
		while (*s && *s != c)
			s++;
	}
	tab[++i] = NULL;
	return (tab);
}
