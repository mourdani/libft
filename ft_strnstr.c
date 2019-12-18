/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:30:15 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/18 05:20:39 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t a;

	if (!*s2)
		return ((char*)s1);
	a = 0;
	while (s1[a] != '\0' && a < len)
	{
		if (s1[a] == s2[0])
		{
			i = 1;
			while (s2[i] && s1[a + i] == s2[i] && (a + i) < len)
				++i;
			if (s2[i] == '\0')
				return ((char*)&s1[a]);
		}
		++a;
	}
	return (0);
}
