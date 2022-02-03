/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 17:20:22 by sofferha      #+#    #+#                 */
/*   Updated: 2022/02/03 14:09:48 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_ISSPACE: checks for white spaces
** returns zero if character tests false, non-zero is true.
*/
int	ft_isspace(char c)
{
	return (c == '\n' || c == '\t' || c == ' ' ||
		c == '\v' || c == '\f' || c == '\r');
}
