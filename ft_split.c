/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:41:04 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/28 16:29:58 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//1. Comienza con un contador que contara palabras.
//2. Haz un while hasta caracter final.
//3. Salta cualquier caracter que sea el delimitador
//		hasta que encontremos un caracter que no sea el delimitador.
//4. Si encontramos un caracter que no es el delimitador,incrementamos contador.
//5. Salta cualquier caracter que no sea delimitador
//		hasta que encuentre caracter que es el delimitador.
//6. Repite los pasos 3-5 hasta el final de la cuerda.
//7. Devuelve el número de palabras.

static int	ft_countwords(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s [i] == c)
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

// 1. ft_wordlen toma dos parametros, s y c.
// 2. Declaro dos variables i y len para itenerar por s, 
// 		len es para contar la longitud de la palabra.
// 3. While hasta encontrar el primer caracter, ese no es el caractar buscado.
// 4. Incrementa i y len hasta encontar el siguente caracter.
// 5. Devuelve len, que contiene la longitud de la palabra.
// 6. Funcion llamada en ft_split() con parametros s y c

static int	ft_wordlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}
// 1. Toma dos argumentos: direccion del array y numero de elementos en el.
// 2. En un ciclo, libera cada elemento de la matriz, comenzando desde
// 		el ultimo elemento.
// 3. Libera la propia matriz.

char	**ft_mallocerror(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		--i;
	}
	free(array);
	return (NULL);
}

// 1. ft_countwords para obtener el numero de palabras en la matriz.
// 2. Use malloc para asignar memoria para la matriz.
// 3. Bucle para iterar a traves de la matriz.
// 4. ft_substr para obtener la subcadena de la cadena s, desde el
// 		indice j hasta terminar el indice del siguiente c.
// 5. Incrementa j por la longitud de la palabra.
// 6. Incrementa i.
// 7. Agregue un terminador nulo al array.
// 8. Devolver el array. 

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_countwords(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		array[i] = ft_substr(s, j, ft_wordlen(&s[j], c));
		if (!array[i])
			return (ft_mallocerror(array, i));
		j += ft_wordlen(&s[j], c);
		++i;
	}
	array[i] = 0;
	return (array);
}
