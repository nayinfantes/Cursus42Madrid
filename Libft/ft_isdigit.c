/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:27:06 by ninfante          #+#    #+#             */
/*   Updated: 2023/02/27 16:47:02 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*determinar si un carácter es un dígito decimal. 
toma un solo argumento de tipo int (carácter a evaluar). 
La función devuelve un valor distinto de cero (es decir, true) 
si el carácter es un dígito decimal, y cero (es decir, false) si no lo es.*/
