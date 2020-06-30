/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 03:26:22 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/18 04:29:13 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Recoded memccpy libc function: Copies bytes from memory area src to dest
** stopping after the first occurrence of c or n bytes have been copied
**
** dest: The pointer to the destination array where the content is to be copied
** src: The pointer to the source of data to be copied
** c: The value to stop copying at
** n: The maximum number of bytes to copy
**
** returns: A pointer to the first byte after c in dst
**          NULL otherwise
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c || s2[i] == (unsigned char)c)
			return (dest + (++i));
		i++;
	}
	return (NULL);
}
