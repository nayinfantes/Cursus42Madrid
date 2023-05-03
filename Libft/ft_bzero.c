/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:23:24 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:23:24 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
establecer todos los bytes de un bloque de memoria en cero
toma dos argumentos: un puntero al inicio del bloque de memoria
y un tamaño en bytes que indica cuántos bytes deben establecerse en 0
es útil para inicializar una estructura de datos
para asegurarse de que un bloque de memoria no contenga datos residuales
se recomienda utilizar memset en su lugar
n no puede ser negativo porque es una variable de tipo size t
=========================================================================

int main()
{
	char str1[] = "Hola Mundo!";
	char str2[] = "Esto es un test";

	// Originales
	printf("Originales:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	// Zero
	ft_bzero(str1, sizeof(str1));
	ft_bzero(str2, sizeof(str2));

	// Imprimir Zero
	printf("Zero:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return (0);
}*/
