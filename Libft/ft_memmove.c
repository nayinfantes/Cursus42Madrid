/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:03:29 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:03:29 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (src == '\0' && dst == '\0')
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		d[len -1] = s[len -1];
		len --;
	}
	return (dst);
}

/*copiar un bloque de memoria de una ubicación a otra,
garantiza la integridad de los datos si las áreas de
destino y origen se solapan
============================================
int main(void)
{
    char str[] = "me da un infarto si estoy una semana mas con la libft";
	len = ft_strlen(str);
    ft_memmove(str + 20, str + 15, len);
    printf("%s\n", str);
    return 0;
}*/
