/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:14:12 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:40:12 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*Toma como parámetro un nodo ’lst’ y libera la
memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. La
memoria de ’next’ no debe liberarse.
recibe lst: el nodo a liberar.
del: un puntero a la función utilizada para liberar
el contenido del nodo.
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
lst es un puntero al elemento de la lista, 
es necesario liberar su memoria para evitar leaks
La función de eliminación de contenido (del) se encarga de 
liberar la memoria ocupada por el contenido
================================================


int main()
{
    // Crear un elemento de lista con un entero
    //las variables locales se almacenan en la pila de la función,
    //que es un área limitada de memoria. Si se intenta almacenar 
    //una gran cantidad de datos en la pila, se puede producir 
    //un desbordamiento de pila y causar un error en t de ejecución.
    int *num = malloc(sizeof(int));
    *num = 42;
    t_list *nodo = ft_lstnew(num);

    // Eliminar el elemento de la lista
    ft_lstdelone(nodo, free);

    return 0;
}*/