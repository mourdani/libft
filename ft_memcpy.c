/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 03:26:22 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/18 03:28:13 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Recoded memcpy libc function: Copies n bytes from memory area src to dst
**
** dst: The pointer to the destination array where the content is to be copied
** src: The pointer to the source of data to be copied
** n: The maximum number of bytes to copy
**
** returns: The original value of dst
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
