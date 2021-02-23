/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_fun.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 17:24:47 by swofferh      #+#    #+#                 */
/*   Updated: 2021/02/23 12:08:02 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/*
** FT_LSTITER: Iterates the list and applies the
** function f tothe content of each element.
*/
void		lst_fun(t_list *node, void (*f)(void *))
{
	if (!node)
		return ;
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
