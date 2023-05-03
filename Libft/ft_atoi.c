/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:36:26 by ninfante          #+#    #+#             */
/*   Updated: 2023/02/09 10:22:38 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-num);
	return (num);
}

/*atoi (convertir a entero) 
La cadena de caracteres debe contener 
solo dígitos numéricos, y la función descarta 
los caracteres no numéricos en la cadena y 
los espacios en blanco al principio.

int main()
{
	char *str1 = "12345";
	char *str2 = "-67890";
	char *str3 = "   42";
	char *str4 = "123456789";
	char *str5 = "-123456789";

	printf("El número entero es: %d\n", ft_atoi(str1));
	printf("El número entero es: %d\n", ft_atoi(str2));
	printf("El número entero es: %d\n", ft_atoi(str3));
	printf("El número entero es: %d\n", ft_atoi(str4));
	printf("El número entero es: %d\n", ft_atoi(str5));

	return (0);
}*/