/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putocta.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 21:43:52 by sofferha      #+#    #+#                 */
/*   Updated: 2022/07/02 18:04:22 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
FT_PUTOCTA: 
Outputs the number in base 8 (octals).
*/
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
