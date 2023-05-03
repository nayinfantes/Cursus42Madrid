/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:12:24 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:12:24 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*determinar la longitud de una cadena de caracteres
toma un solo argumento de tipo char * (cadena de caracteres a evaluar)
evuelve un valor de tipo size_t (longitud de la cadena de caracteres)
incluyendo null*/
