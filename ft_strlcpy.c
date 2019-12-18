/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 04:42:03 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/18 06:46:33 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	if (src && dest)
	{
		i = 0;
		src_size = ft_strlen(src);
		if (size == 0)
			return (src_size);
		while (i++ < size - 1 && *src)
			*dest++ = *src++;
		*dest = '\0';
		return ((i > src_size) ? --i : src_size);
	}
	return (0);
}
