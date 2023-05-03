/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:03:10 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:03:10 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == '\0' && s == '\0')
		return (0);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*copiar datos de una región de memoria a otra
Toma como argumentos un puntero al destino, un puntero al origen 
y el número de bytes a copiar. Devuelve un puntero al destino
=================================================
int main(void) {
  char src[10] = "Hola mundo";
  char dest[10];
  char *ret;

  ret = ft_memcpy(dest, src, 8);
  printf("%s\n", ret);

  return 0;
}*/
