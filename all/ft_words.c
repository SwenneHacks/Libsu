/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_words.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:53:06 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/17 22:48:17 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_WORDS counts the amout of words (by skipping spaces)
*/

int		ft_words(char const *str, char space)
{
	int i;
	int loop;
	int count;

	i = 0;
	loop = 0;
	count = 0;
	if (!(str))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == space)
			loop = 0;
		else if (loop == 0)
		{
			loop = 1;
			count++;
		}
		str++;
	}
	return (count);
}
