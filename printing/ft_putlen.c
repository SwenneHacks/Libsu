/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 15:49:00 by sofferha      #+#    #+#                 */
/*   Updated: 2020/09/02 16:12:48 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libsu.h"

int		ft_putlen(char c, int len)
{
	if (len < 0)
		return (0);
	while (len)
	{
		ft_putchar(c);
		len--;
	}
    return (0);
}
