/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:23:49 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:23:49 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_bzero(ptr, (count * size));
		return (ptr);
	}
}

/*reservar bloques de memoria dinámica, inicializarlos en cero.
toma dos argumentos: el n de elementos que desea alocar en la memoria 
y el tamaño en bytes de cada elemento. 
devuelve un puntero a la primera posición del bloque de memoria reservado.
Si no hay suficiente memoria disponible, la función devuelve un puntero NULL.
==========================================================================
int main(void)
{
int nmemb = 5, size = sizeof(int);
int *ptr = (int *)ft_calloc(nmemb, size);
if (ptr == NULL)
{
    printf("No se puede alocar memoria\n");
    return 1;
}

for (int i = 0; i < nmemb; i++)
{
    printf("ptr[%d] = %d\n", i, ptr[i]);
}

// Libera la memoria alocada
free(ptr);

return 0;
}*/
