/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putocta.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 21:43:52 by sofferha      #+#    #+#                 */
/*   Updated: 2020/08/18 21:43:56 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

void	ft_putocta(unsigned long n)
{
	if (n > 7)
	{
		ft_putocta(n / 8);
		ft_putocta(n % 8);
	}
	else
		ft_putchar(n % 8 + '0');
}
