/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 19:03:21 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/17 22:27:07 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_TOLOWER: converst upper-case letter to lower-case
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
