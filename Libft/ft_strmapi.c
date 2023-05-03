/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:12:34 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:12:34 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
============================================
ft_striteri modifica la cadena original
ft_strmapi devuelve una nueva cadena
==============================================
int	main(void)
{
    char s[] = "hola, mundo!";
    char *result;

    result = ft_strmapi(s, &ft_toupper);
    printf("Original : %s\n", s);
    printf("Toupper : %s\n", result);

    free(result);
    return (0);
}*/