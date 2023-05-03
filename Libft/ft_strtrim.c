/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:34:52 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/14 14:43:29 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	ptr = (char *)malloc(end - start + 2);
	if (ptr == NULL)
		return (ptr);
	ft_strlcpy(ptr, &s1[start], end - start + 2);
	return (ptr);
}

/*Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
Devuelve La string recortada o
NULL si falla la reserva de memoria.
=====================================================
STRCHR ==> busca un carácter en una cadena de caracteres (string)
devuelve un puntero a la primera ocurrencia de ese carácter.
Si la cadena s1 está formada únicamente por caracteres en set,
devuelve una copia de la cadena vacía.
Si la función no ha llegado al final de la cadena s1 y 
ha encontrado un carácter que no está en set, avanza
end hacia atrás hasta que encuentre el último carácter de s1 que no está en set.
int main()
{
    char s1[] = "   	Hola, mundo!   ";
    char set[] = " \t\n";
    char *recortada = ft_strtrim(s1, set);
    printf("Cadena original: '%s'\n", s1);
    printf("Cadena recortada: '%s'\n", recortada);
    free(recortada);
    return 0;
}*/