/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:24:31 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/13 12:05:28 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	*lst = new;
	new->next = tmp;
}

/*Añade el nodo ’new’ al principio de la lista ’lst’.
recibe lst: la dirección de un puntero al primer nodo de
una lista.
new: un puntero al nodo que añadir al principio de
la lista.
No devuelve nada
==================================================
una lista es una estructura de datos se utiliza 
para almacenar una colección de elementos. 
Pueden ser una enlazadas, doblemente enlazadas o 
circulares enlazadas. Cada elemento en la lista 
se conoce como un nodo, y contiene un valor y un puntero 
(o varios punteros, en el caso de una lista doblemente enlazada) 
que apuntan al siguiente (o anterior) nodo en la lista.
===================================================
int main()
{
	t_list *lst = NULL;
	t_list *nuevo = NULL;

	nuevo = ft_lstnew("Hola, soy un nuevo nodo");
	ft_lstadd_front(&lst, nuevo);
	
	nuevo = ft_lstnew("Soy otro nodo");
	ft_lstadd_back(&lst, nuevo);

	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}

	return (0);
}*/