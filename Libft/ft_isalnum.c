/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:43:17 by ninfante          #+#    #+#             */
/*   Updated: 2023/02/27 16:47:21 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*determinar si un carácter es alfanumérico.
función toma un solo argumento de tipo int (carácter a evaluar)
devuelve un valor distinto de cero (es decir, true) si el carácter 
es alfanumérico
y cero (es decir, false) si no lo es*/
