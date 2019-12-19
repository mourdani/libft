/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 01:21:10 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/19 00:45:12 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*res;
	int		len;

	len = 1;
	if (s1)
		len += ft_strlen(s1);
	if (s2)
		len += ft_strlen(s2);
	if (!s1 && !s2)
		return (0);
	if (!(str = malloc(sizeof(char) * len)))
		return (0);
	res = str;
	if (s1--)
		while (*(++s1))
			*(str++) = *s1;
	if (s2--)
		while (*(++s2))
			*(str++) = *s2;
	*str = 0;
	return (res);
}
