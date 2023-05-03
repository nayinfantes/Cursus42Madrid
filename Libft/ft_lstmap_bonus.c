/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:34:52 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:34:52 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_clear(void *i, t_list *new_list, void (del)(void *))
{
	(del)(i);
	ft_lstclear(&new_list, del);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux;
	void	*i;

	i = 0;
	if (!lst || !del || !f)
		return (0);
	aux = NULL;
	new_list = aux;
	while (lst)
	{
		i = (f)(lst->content);
		if (!i)
			return (ft_clear(i, new_list, del));
		aux = ft_lstnew(i);
		if (!aux)
			return (ft_clear(i, new_list, del));
		lst = lst->next;
		ft_lstadd_back(&new_list, aux);
	}
	return (new_list);
}

/*Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.
recibe lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada
en la iteración de cada elemento de la lista.
del: un puntero a función utilizado para eliminar
el contenido de un nodo, si es necesario.
devuelve La nueva lista.
NULL si falla la reserva de memoria.
==================================================
Si la función f devuelve un puntero NULL, se llama a ft_clear 
para liberar la memoria de la nueva lista y se devuelve NULL. 
Si la función ft_lstnew falla al crear un nuevo elemento,
se llama a ft_clear para liberar la memoria de la nueva lista 
y se devuelve NULL.
el nuevo elemento se agrega a la lista new_list 
utilizando la función ft_lstadd_back.
==================================================
una lista es una estructura de datos se utiliza 
para almacenar una colección de elementos. 
Pueden ser una enlazadas, doblemente enlazadas o 
circulares enlazadas. Cada elemento en la lista 
se conoce como un nodo, y contiene un valor y un puntero 
(o varios punteros, en el caso de una lista doblemente enlazada) 
que apuntan al siguiente (o anterior) nodo en la lista. 
i almacena el resultado de aplicar la funcion al contenido
(del)(i) se utiliza para liberar la memoria asignada al contenido 
del nuevo elemento de la lista antes de liberar la memoria 
asignada a la lista en sí.
===================================================
void*	ft_print_num(void *num)
{
	printf("%d\n", *(int*)num);
	return (0);
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
	ft_lstmap(lst, &ft_print_num, &free);

	// Limpiar memoria
	ft_lstclear(&lst, free);

	return (0);
}*/