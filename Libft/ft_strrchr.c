/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:14:01 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/11 15:14:01 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			ptr = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (ptr);
}

/*usca un carácter específico en una cadena de caracteres 
y devuelve un puntero al último lugar donde se encuentra 
se carácter en la cadena.
busca el carácter desde el final de la cadena hacia el principio
int main()
{
  char str[] = "Hola Mundo";
  char c = 'l';

  char* result = ft_strrchr(str, c);
  if (result)
    printf("'%c' encontrada en '%s' , posicion %ld\n", c, str, result - str + 1);
  else
    printf("'%c' no esta en '%s'\n", c, str);

  return 0;
}*/
