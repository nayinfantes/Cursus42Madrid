/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:12:57 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:12:57 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*compara dos cadenas de caracteres hasta un número c de caracteres 
Devuelve un entero que indica si las cadenas son iguales (0), 
si la primera es mayor que la segunda (mayor que 0) 
o si la primera es menor que la segunda (menor que 0).
int main() {
    char s1[20] = "Hola";
    char s2[20] = "Hol";
    int n = 3;
    int result = strncmp(s1, s2, n);
    if (result == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
	
}
*/
