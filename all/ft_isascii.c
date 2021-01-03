/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 18:15:07 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/19 22:24:08 by sofferha      ########   odam.nl         */
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
