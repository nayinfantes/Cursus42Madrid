/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:05:16 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:05:16 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		*p = (char)c;
		p++;
		i++;
	}
	return (b);
}
/*se utiliza para establecer un bloque de memoria en un valor específico. 
La función toma tres argumentos: un puntero a un bloque de memoria, 
un valor a establecer y el número de bytes a afectar.
=====================================================
int main(void) {
  char str[20];

  ft_memset(str, 'A', 20);
  str[19] = '\0';
  printf("%s\n", str);

  return 0;
}*/
