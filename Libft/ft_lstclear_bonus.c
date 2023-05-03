/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:08:26 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:30:26 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3)
Al final, el puntero a la lista debe ser NULL.
recibe lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar
el contenido de un nodo.
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
utiliza ft_lstdelone para eliminar el elemento actual
(junto con su contenido), y luego actualiza el puntero 
lst para que apunte al siguiente elemento de la lista.
Una vez que se han eliminado todos los elementos de la lista,
establece el puntero lst en NULL, la lista ya no tiene elementos.
=========================================================

int	main()
{
	t_list *lst = NULL;
	t_list *nuevo = NULL;
	char	*str = ft_strdup("Hola, soy un nuevo nodo");
	char	*str2 = ft_strdup("Soy otro nodo");


	nuevo = ft_lstnew(str);
	ft_lstadd_front(&lst, nuevo);
	
	nuevo = ft_lstnew(str2);
	ft_lstadd_back(&lst, nuevo);

	// Eliminar todos los elementos de la lista
	ft_lstclear(&lst, free);

	return (0);
}*/