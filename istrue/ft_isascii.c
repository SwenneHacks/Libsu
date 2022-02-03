/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 18:15:07 by swofferh      #+#    #+#                 */
/*   Updated: 2022/02/03 14:10:20 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_ISASCII: checks for an ascii character
** returns zero if character tests false, non-zero is true.
*/
int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
