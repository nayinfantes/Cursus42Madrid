/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:09:03 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:09:03 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*p;

	size = ft_strlen(s) + 1;
	p = malloc(size);
	if (p)
	{
		ft_memcpy(p, s, size);
	}
	return (p);
}
/*crear una copia dinámica (con malloc) de una cadena. 
Toma un puntero a una cadena de caracteres y devuelve 
un puntero a una nueva cadena de caracteres con la misma info.
Se asigna memoria dinámica en el tamaño exacto necesario para 
almacenar la cadena original y un carácter nulo.
Se usa la función memcpy para copiar la cadena original a 
la ubicación de memoria recién asignada.
Se devuelve el puntero a la ubicación de memoria recién asignada.
============================================================
int main() {
    char *str = "Hola, mundo!";
    char *dup = ft_strdup(str);
    if (!dup) {
        printf("Error\n");
        return 1;
    }
    printf("Original: %s\n", str);
    printf("Duplicado: %s\n", dup);
    free(dup);
    return 0;
}*/
