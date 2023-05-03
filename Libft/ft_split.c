/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:34:52 by ninfante          #+#    #+#             */
/*   Updated: 2023/03/14 16:52:01 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static size_t	ft_letters(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return (size);
}

static void	ft_free(char **str, size_t j)
{
	while (j-- > 0)
		free(str[j]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	**str;

	i = 0;
	j = -1;
	str = malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!(str))
		return (NULL);
	while (++j < ft_words(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_letters(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (!(str[j]))
		{
			ft_free(str, j);
			return (NULL);
		}
		i = i + size;
	}
	str[j] = 0;
	return (str);
}

/*Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
devuelve El array de nuevas strings resulatente de la
separación.
NULL si falla la reserva de memoria.
================================================
ft_words ==> cuenta palabras, recorre la cadena s caracter x caracter 
verifica si el caracter actual es diferente a c. 
Si s en i es diferente a  c, word++ 
avanza i hasta el final de la palabra con otro while 
hasta encontrar c o el final de s.
================================================
ft_letters ==> cuenta las letras desde el primer caracter !c
de la palabra
================================================
ft_free ==> se utiliza para manejo de errores
================================================
ft_substr ==> extraer una parte de una cadena de caracteres.
devuelve una nueva cadena que contiene los caracteres 
desde la posición inicio hasta la posición inicio + longitud -1 de la original.
================================================
static size_t	ft_csubstrings(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret ++;
			while (*s && *s != c)
				s ++;
		}
		else
			s ++;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_csubstrings(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s ++;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			s ++;
	}
	ret[i] = 0;
	return (ret);
}
int	main(void)
{
	char	**split;

	split = ft_split("Hola,mundo,de,42", ',');
	if (!split)
	{
		printf("Error: no se pudo reservar memoria\n");
		return (1);
	}
	int i = 0;
	while (split[i])
	{
		printf("Subcadena %d: %s\n", i + 1, split[i]);
		i++;
		free(split[i]);
	}
	free(split);
	return (0);
}*/
