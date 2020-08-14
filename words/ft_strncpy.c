/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:37:02 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/11 18:34:24 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FT_STR_N_CPY
** Copies a string until a given 'stop' (number of times/len).
*/

char		*ft_strncpy(char *dst, const char *src, int n)
{
	int		index;

	index = 0;
	while (index < n)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
