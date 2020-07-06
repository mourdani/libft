/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:51:00 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/18 07:43:28 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Function: Allocates (with malloc(3)) and returns a substring from the string
** given in argument. It begins at index ’start’ and is of maximum size ’len’
**
** s: The string from which create the substring
** start: The start index of the substring in the string
** len: The maximum length of the substring
**
** returns: The substring
**          NULL otherwise
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
