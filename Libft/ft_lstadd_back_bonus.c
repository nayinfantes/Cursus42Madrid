/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:15:06 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:45:16 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

/*Añade el nodo ’new’ al final de la lista ’lst’.
recibe lst: el puntero al primer nodo de una lista.
new: el puntero a un nodo que añadir a la lista.
no devuelve nada 
int main()
{
	// Crear una lista vacía
	t_list *lst = NULL;
	
	// Crear nuevos nodos
	t_list *nodo1 = ft_lstnew("Hola ");
	t_list *nodo2 = ft_lstnew("mundo!");
	
	// Agregar los nuevos nodos a la lista
	ft_lstadd_back(&lst, nodo1);
	ft_lstadd_back(&lst, nodo2);
	
	// Imprimir
	while (lst != NULL)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	
	return 0;
}*/