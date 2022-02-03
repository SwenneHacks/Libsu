/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 16:52:39 by swofferh      #+#    #+#                 */
/*   Updated: 2022/02/03 14:10:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_ISALNUM: checks for an alphabetic character or digit
** returns zero if character tests false, non-zero is true.
*/
int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
