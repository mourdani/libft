/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:27:49 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/18 03:23:21 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char				*dst;
	unsigned long		i;

	i = 0;
	if (!(dst = malloc(sizeof(char) * (count * size))))
		return (NULL);
	while (i != (count * size))
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
