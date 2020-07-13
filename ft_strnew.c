#include "libft.h"

/*
** This function allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’. Each character of the string is initialized at ’\0’. If the
** allocation fails the function returns NULL.
*/

char		*ft_strnew(size_t size)
{
	char	*result;

	result = (char *)malloc((size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_bzero(result, size + 1);
	return (result);
}
