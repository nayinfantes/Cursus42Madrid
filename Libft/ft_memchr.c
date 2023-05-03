/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:02:41 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:02:41 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const char	*p = ptr;

	while (n > 0)
	{
		if (*p == (const char)c)
		{
			return ((void *)p);
		}
		p++;
		n--;
	}
	return (NULL);
}

/*busca un carácter en una zona determinada de memoria. 
Toma tres argumentos como entrada: un puntero a la zona de memoria a buscar,
el valor del carácter a buscar y la longitud de la zona de memoria. 
Devuelve un puntero a la primera ocurrencia del carácter en la zona de memoria 
o un puntero nulo si no se encuentra.
========================================================================
int main(void) {
  char s[20] = "Hhola mundo!";
  char c = 'o';

  char *result = ft_memchr(s, c, strlen(s));
  if (result != NULL) {
    printf("'%c' encontrado en la posicion %ld\n", c, result - s);
  } else {
    printf("'%c' no encontrado\n", c);
  }

  return 0;
}
*/
