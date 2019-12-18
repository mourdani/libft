/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 03:50:32 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/04 03:07:30 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		cmpc(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	a = ft_strlen(s1) - 1;
	while (cmpc(s1[i], (char*)set))
		i++;
	if (i == a + 1)
		return ("");
	while (cmpc(s1[a], (char*)set))
		a--;
	if (!(str = (char *)malloc((a - i + 2) * sizeof(char))))
		return (0);
	while (i <= a)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
