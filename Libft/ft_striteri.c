/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:09:50 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:09:50 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
no devuelve nada
============================================
ft_striteri modifica la cadena original
ft_strmapi devuelve una nueva cadena
=============================================
int	main(void)
{
    char str[] = "hola, mundo!";
    char *result;

    result = ft_strmapi(str, &ft_toupper);
    printf("Original : %s\n", str);
    printf("Toupper : %s\n", result);

    free(result);
    return (0);
}
====================================================
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}
*/
