/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:13:43 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:13:43 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*busca una subcadena dentro de una cadena principal. 
toma como argumentos una cadena principal, una subcadena a buscar
y una longitud máxima de la búsqueda en la cadena principal. 
Devuelve un puntero a la primera ocurrencia de la subcadena 
en la cadena principal o NULL si no se encuentra. 
sólo hasta la longitud máxima especificada.
int main()
{
	char *haystack = "Este es mi primer proyecto del cursus";
	char *needle = "del";
	size_t len = ft_strlen(haystack);
	char *result = ft_strnstr(haystack, needle, len);
	if (result)
	{
		printf("'%s' encontrada en '%s'\n", needle, haystack);
	}
	else
	{
		printf("'%s' no se encuentra en '%s'\n", needle, haystack);
	}
	return 0;
}
*/
