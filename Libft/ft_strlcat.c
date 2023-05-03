/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:11:19 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:11:19 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*concatena dos cadenas, permite especificar un tamaño máx 
para la cadena dest.La función toma tres argumentos: 
un puntero a la cadena destino,un puntero a la cadena fuente, 
y el tamaño máximo permitido para la cadena destino. 
concatena los caracteres de la cadena fuente al final 
de la cadena destino, hasta que se alcanza el tamaño máx 
o un carácter nulo en la cadena fuente.
La función devuelve la longitud total de la cadena 
resultante, incluyendo el carácter nulo.
====================================================
int main() {
    char dest[] = "hola";
    char src[] = "mundo";
    printf("Antes de concatenar: %lu\n", strlen(dest));
    size_t result = strlcat(dest, src, sizeof(dest));
    printf("Len después de concatenar: %lu\n", strlen(dest));
    printf("Len total: %lu\n", result);
    printf("Resultado: %s\n", dest);
    return 0;
}*/
