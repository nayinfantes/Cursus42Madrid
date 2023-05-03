/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:40:56 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:40:56 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}

/*Devuelve el último nodo de la lista.
recibe un pruntero al principio de la lst
==================================================
una lista es una estructura de datos se utiliza 
para almacenar una colección de elementos. 
Pueden ser una enlazadas, doblemente enlazadas o 
circulares enlazadas. Cada elemento en la lista 
se conoce como un nodo, y contiene un valor y un puntero 
(o varios punteros, en el caso de una lista doblemente enlazada) 
que apuntan al siguiente (o anterior) nodo en la lista.
===================================================
Si next es nulo, entonces tmp apunta al último elemento 
de la lista y se devuelve como resultado de la función.
===================================================
int	main(void)
{
	t_list *lst;
	t_list *nuevo = NULL;
	char	*str = ft_strdup("Hola, soy un nuevo nodo");
	char	*str2 = ft_strdup("Soy otro nodo");


	nuevo = ft_lstnew(str);
	ft_lstadd_front(&lst, nuevo);
	
	nuevo = ft_lstnew(str2);
	ft_lstadd_back(&lst, nuevo);
	
	t_list	*last;

	// Ultimo elemento de la lista
	last = ft_lstlast(lst);

	// Limpia la memoria utilizada por la lista
	ft_lstclear(&lst, free);

	return (0);
}*/