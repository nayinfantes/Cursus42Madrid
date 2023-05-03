/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:01:07 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:01:07 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	size = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}

/*Cuenta el número de nodos de una lista.
recibe un puntero al primer elemento de la lista
devuelve la longitud de la lista
==================================================
una lista es una estructura de datos se utiliza 
para almacenar una colección de elementos. 
Pueden ser una enlazadas, doblemente enlazadas o 
circulares enlazadas. Cada elemento en la lista 
se conoce como un nodo, y contiene un valor y un puntero 
(o varios punteros, en el caso de una lista doblemente enlazada) 
que apuntan al siguiente (o anterior) nodo en la lista.
===================================================
int	main(void)
{
	t_list	*lst;
	int		num1 = 10, num2 = 20;
	int		size;

	// Crear nueva lista 
	lst = ft_lstnew(&num1);
	ft_lstadd_back(&lst, ft_lstnew(&num2));

	//Tamaño de la lista
	size = ft_lstsize(lst);

	// Imprimir el tamaño
	printf("El tamaño de la lista es: %d\n", size);

	return (0);
}*/