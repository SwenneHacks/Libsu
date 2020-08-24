/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:55:08 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/24 22:05:40 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_ITOA: Allocates with malloc and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled, NULL if faisl.
*/

static char		ft_solver(int sign, int len, int n, char *res)
{
	int i;

	i = -1;
	while (i + 1 < len - sign)
	{
		i++;
		res[len - 1 - i] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (*res);
}

char			*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*res;

	sign = n < 0;
	len = ft_numlen(n);
	res = ft_memlen(len + 1);
	if (res == NULL)
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_longnull(n));
	if (sign)
	{
		*res = '-';
		n *= -1;
	}
	ft_solver(sign, len, n, res);
	return (res);
}
