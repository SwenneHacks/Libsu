/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 22:02:36 by sofferha      #+#    #+#                 */
/*   Updated: 2020/08/24 23:39:23 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_MEMLEN: allocates exactly the amount of bits/len it has been given
** as parameter (actually, excluding the 'null terminator').
*/

char		*ft_memlen(int len)
{
	char	*str;

	*str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	str[len - 1] = '\0';
	return (str);
}
