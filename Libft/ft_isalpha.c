/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:09:59 by ninfante          #+#    #+#             */
/*   Updated: 2023/02/27 16:47:14 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*determinar si un carácter es una letra alfabética. 
La función toma un solo argumento de tipo int (carácter a evaluar)
devuelve un valor distinto de cero si el carácter es una letra alfabética, 
y cero (es decir, false) si no lo es.*/
