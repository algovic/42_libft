/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:21:41 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/28 16:27:41 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Multiplica (n) por 10 y suma el dígito (s).
//2. Multiplique el resultado por signo para procesar números negativos.
//3. Compare el resultado con números enteros mínimos y máximos.
//4. Si < número mínimo, devuelve 0.
//5. Si > número máximo posible, devuelve -1.
//6. Si el resultado está entre min y max, devuelve 1.

static int	limit(long long n, const char *s, int sign)
{
	long long	limit_min;
	long long	limit_max;

	limit_min = ((n * 10) + (*s - '0')) * sign;
	if (limit_min < -2147483648)
		return (0);
	limit_max = ((n * 10) + (*s - '0')) * sign;
	if (limit_max > 2147483647)
		return (-1);
	return (1);
}

//1. ft_atoi() toma una cadena y la convierte en un número entero.
//2. Comprueba si la cadena está vacía. Si es así, devuelve 0.
//3. Comprueba el signo comprobando si el primer carácter es '+' o '-'.
//4. Comprueba si la cadena contiene solo números.
//5. Recorre la cadena y conviértela en entero.
//6. Comprueba si el número está fuera de rango.
//7. Devuelve el número.

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long int	result;
	int			limit_test;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]))
	{
		limit_test = limit(result, str, sign);
		if (limit_test == 0 || limit_test == -1)
			return (limit_test);
		result = ((result * 10) + str[i] - '0');
		i++;
	}
	return (result * sign);
}
