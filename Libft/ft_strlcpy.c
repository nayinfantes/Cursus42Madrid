/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:12:04 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:12:04 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	i = 0;
	while ((src[i]) && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* copiar una cadena de caracteres de una fuente a un destino,
limitando la longitud de la copia.
toma tres argumentos: el destino (un puntero a char),
la fuente (también un puntero a char), 
y el tamaño máximo de la copia (un size_t). 
copia los caracteres de la fuente al destino hasta alcanza el tamaño máx
o encuentra un nulo en la fuente. 
devuelve la longitud de la fuente original, sin incluir el carácter nulo
=====================================================================
int main(void) {
char dst[20];
char *src = "Hola Mundo";
size_t size = 20;

size_t n = ft_strlcpy(dst, src, size);
printf("se copian %zu caracteres: %s\n", n, dst);

return 0;
}*/
/*c*/
