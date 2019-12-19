/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:57:10 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/19 01:02:48 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cwords(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str && (*str == c))
			str++;
		if (*str && *str != c)
		{
			cnt++;
			while (*str && *str != c)
				str++;
		}
	}
	return (cnt);
}

static char	**freem(char **str, int a)
{
	int	i;

	i = 0;
	while (*str[i] && i < a)
		free((void *)str[i++]);
	if (str)
		free((void *)str);
	return (NULL);
}

static char	*mword(char const *str, char c)
{
	char	*word;
	int		cnt;

	cnt = 0;
	while (str[cnt] && str[cnt] != c)
		cnt++;
	if (!(word = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	cnt = 0;
	while (str[cnt] && str[cnt] != c)
	{
		word[cnt] = str[cnt];
		cnt++;
	}
	word[cnt] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	int		a;
	int		i;
	char	**tab;

	i = 0;
	if (!s)
		return (NULL);
	a = cwords(s, c);
	if (!(tab = (char **)malloc(sizeof(char*) * (a + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s && *s != c)
		{
			if (!(tab[i++] = mword(s, c)))
				return (freem(tab, --i));
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
