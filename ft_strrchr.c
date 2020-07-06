/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 01:51:09 by mourdani          #+#    #+#             */
/*   Updated: 2019/11/14 01:58:29 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recoded strchr libc function: Locates the first occurrence of c in the string
** pointed to by s
**
** s: The string to be scanned
** c: The character to be searched
**
** returns: A pointer to the located character
**          NULL otherwise
*/

unsigned long	strlen(const char *str)
{
	unsigned long i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s);
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] != c)
		return (0);
	return (char *)(s + i);
}
