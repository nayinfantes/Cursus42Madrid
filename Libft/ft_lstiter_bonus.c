/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:54 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:24:54 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/*Itera la lista ’lst’ y aplica la función ’f’ en el
contenido de cada nodo.
recibe lst: un puntero al primer nodo.
f: un puntero a la función que utilizará cada nodo.
no devuelve nada
==================================================
una lista es una estructura de datos se utiliza 
para almacenar una colección de elementos. 
Pueden ser una enlazadas, doblemente enlazadas o 
circulares enlazadas. Cada elemento en la lista 
se conoce como un nodo, y contiene un valor y un puntero 
(o varios punteros, en el caso de una lista doblemente enlazada) 
que apuntan al siguiente (o anterior) nodo en la lista.
===================================================
void	ft_print_num(void *num)
{
	printf("%d\n", *(int*)num);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *nuevo = NULL;
	char	*str = ft_strdup("Hola, soy un nuevo nodo");
	char	*str2 = ft_strdup("Soy otro nodo");


	nuevo = ft_lstnew(str);
	ft_lstadd_front(&lst, nuevo);
	
	nuevo = ft_lstnew(str2);
	ft_lstadd_back(&lst, nuevo);

	// Imprimir el contenido ft_lstiter
	ft_lstiter(lst, ft_print_num);

	// Limpiar memoria
	ft_lstclear(&lst, free);

	return (0);
}*/