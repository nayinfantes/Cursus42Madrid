/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:02:42 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/14 14:47:16 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int i)
{
	int	count;

	count = 0;
	if (i <= 0)
	{
		i = i * -1;
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			count;
	long int	number;

	number = n;
	count = ft_count(number);
	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == '\0')
		return (ptr);
	ptr[count--] = '\0';
	if (number == 0)
		ptr[0] = '0';
	if (number < 0)
	{
		ptr[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		ptr[count--] = number % 10 + '0';
		number = number / 10;
	}
	return (ptr);
}

/*Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.
devueve La string que represente el número.
NULL si falla la reserva de memoria.
=================================================
ft_count ==> determinar cuanta memoria se debe reservar
inicializa un contador count en cero.
si el número i es menor o igual a cero, se cambia el signo de i 
y se incrementa el count,(un dígito + que es el signo negativo.)
mientras i sea mayor que cero, se divide i entre 10 (elimina ultimo digt de i) 
hasta que i sea cero (cantidad de digt que tiene el num).
======================================================
ft_itoa ==> puntero ptr para asignar memoria.
cualquier contenido después de null no es parte de la cadena
se valora si el número es cero o negativo
se divide number entre 10 para obtener cada dígito del número en orden inverso,
toma el valor de number, divide entre 10 y toma el residuo
que es el dígito más a la derecha del número. 
se agrega el valor ASCII del carácter '0' al dígito,
se asigna a la posición actual de ptr, 
count apunta a la sig posiciom en la cadena.
=====================================================
 int main()
{
	int a;
	a = -2147483648LL;
	printf("%s", ft_itoa(a));
	return (0);
} 
*/