/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:02:56 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:02:56 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1, *p2 = s2;

	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/*comparar dos bloques de memoria. Recibe dos punteros a memoria
y un número de bytes a comparar. La función compara byte a byte
los dos bloques de memoria y devuelve 0 si son iguales, un número
menor que 0 si el primer bloque es menor que el segundo y un número
mayor que 0 si el primer bloque es mayor que el segundo.
==================================================================
int main(void) {
    char s1[] = "Hola";
    char s2[] = "Holi";
    int res = ft_memcmp(s1, s2, strlen(s1));
    printf("%d\n", res);
    return 0;
}
*/
