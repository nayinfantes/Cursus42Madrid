/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:10:07 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:10:07 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len + 1);
	ft_strlcat(ptr, s2, len + 1);
	return (ptr);
}
/*unir varias cadenas de caracteres en una sola cadena. 
devuelve una nueva cadena de caracteres que contiene 
las cadenas originales unidas.
malloc para asignar memoria dinámica para la cadena resultante.
La cantidad de memoria necesaria es igual a la len total de la 
cadena resultante más uno (para el carácter nulo al final de la cadena).
=======================================================================
int main() {
    char *strings[] = {"Hola", "mundo", "!"};
    char *result = ft_strjoin(strings, 3, " ");
    printf("%s\n", result);

    free(result);
    return 0;
}*/
