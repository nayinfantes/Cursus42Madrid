/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:59:01 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:59:01 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (new);
	new->content = (void *)content;
	new->next = (NULL);
	return (new);
}

/*Crea un nuevo nodo utilizando malloc(3). La
variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. La variable
’next’, con NULL.
================================================
contenido del nuevo nodo (ret->content) puntero 
content que se pasó como argumento. Esto no copia el 
contenido de content, asigna su dirección de memoria 
al puntero content en el nuevo nodo.
==================================================
una lista es una estructura de datos se utiliza 
para almacenar una colección de elementos. 
Pueden ser una enlazadas, doblemente enlazadas o 
circulares enlazadas. Cada elemento en la lista 
se conoce como un nodo, y contiene un valor y un puntero 
(o varios punteros, en el caso de una lista doblemente enlazada) 
que apuntan al siguiente (o anterior) nodo en la lista.
===================================================
int	main()
{
    char	*content = "Hola, mundo!";
    t_list	*nodo = ft_lstnew(content);

    if (nodo == NULL)
    {
        printf("Error\n");
        return (1);
    }

    printf("Contenido del nodo: %s\n", (char *)nodo->content);
    return (0);
}*/