/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:22:53 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 14:22:53 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

/*determinar si un carácter es un carácter imprimible
toma un solo argumento de tipo int
La función devuelve un valor distinto de cero (true) si es imprimible
y cero (es decir, false) si no lo es*/
