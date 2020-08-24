/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_textline.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:41:09 by sofferha      #+#    #+#                 */
/*   Updated: 2020/08/21 18:46:52 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** This function counts the amount of lines in a text file. (handy with gnl)
*/

int     ft_textsize(const char *str)
{
	int	i;
    int len;
	int newline;

	i = 0;
	newline = 1;
	while (str[i])
	{
		if (str[i] == '\n')
			newline++;
		i++;
	}
    len = newline;
	return (len);
}