/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:24:08 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:24:08 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*determinar si un carácter es un valor ASCII
toma un solo argumento de tipo int (carácter a evaluar)
devuelve un valor distinto de cero (es decir, true) si es un valor ASCII
y cero (es decir, false) si no lo es.*/
