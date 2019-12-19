/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 03:50:32 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/19 00:56:37 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	a;
	char	*res;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	a = ft_strlen(s1 + i);
	if (a != 0)
	{
		while (s1[a + i - 1] && ft_strchr(set, s1[a + i - 1]) != NULL)
			a--;
	}
	res = (char*)malloc(sizeof(*res) * (a + 1));
	if (res == NULL)
		return (NULL);
	res = ft_strncpy(res, (s1 + i), a);
	res[a] = '\0';
	return (res);
}
