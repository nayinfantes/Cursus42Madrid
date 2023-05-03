/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:08:28 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:08:28 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}

/*busca un carácter en una cadena de caracteres (string)
devuelve un puntero a la primera ocurrencia de ese carácter.
Si el carácter no se encuentra devuelve un puntero nulo.
==========================================================
int main() {
    char str[] = "Hola mundo";
    char ch = 'a';
    char *res;

    res = ft_strchr(str, ch);
    if (res) {
        // +1 porque empezamos en cero
        printf("la a esta en la pos: %ld\n", res - str + 1);
    } else {
        printf("no hay a en la cadena\n");
    }
    return 0;
}*/
