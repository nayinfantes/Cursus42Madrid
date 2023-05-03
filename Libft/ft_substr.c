/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:17:42 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:17:42 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (s == '\0')
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < len && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

/* s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring.
extraer una parte de una cadena de caracteres.
devuelve una nueva cadena que contiene los caracteres 
desde la posición inicio hasta la posición inicio + longitud -1 de la original.

int main()
{
    char *str = "Hola mundo";
    char *sub;

    // Obtener una subcadena 
    sub = ft_substr(str, 2, 5);

    // Imprimir la subcadena 
    printf("La subcadena es: %s\n", sub);

    // Liberar la memoria para evitar leaks  
    free(sub);

    return 0;
}*/
