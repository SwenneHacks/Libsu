/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wordlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:53:06 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/11 19:11:48 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FT_WORDLEN counts the amout of chars/lettersin a word
*/

int		word_len(char const *str, int i, char space)
{
	int len;

	len = 0;
	while (str[i] && str[i] != space)
	{
		len++;
		i++;
	}
	return (len);
}
