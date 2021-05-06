/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/08 21:54:03 by swofferh      #+#    #+#                 */
/*   Updated: 2021/03/20 13:55:02 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

typedef enum		e_state
{
	ONE_LINE = 1,
	END_FILE = 0,
	ERROR = -1,
	LOOP = 2
}					t_state;

static char		*copy_buffer(char *old, char *new, int n)
{
	char	*next;
	int		len;

	if (old == NULL)
	{
		next = (char *)malloc(sizeof(char) * (n + 1));
		if (next == NULL)
			return (NULL);
		ft_strncpy(next, new, n);
	}
	else
	{
		len = ft_strclen(old, '\0');
		next = (char *)malloc(sizeof(char) * (len + n + 1));
		if (next == NULL)
			return (NULL);
		ft_strncpy(next, old, len);
		free(old);
		ft_strncpy(next + len, new, n);
	}
	return (next);
}

static t_state	read_line(int fd, char *buffer, char **out, int *size)
{
	ssize_t	ret;
	int		i;

	if (*size == 0)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == END_FILE || ret == ERROR)
			return (ret);
		buffer[ret] = '\0';
		*size = ret;
	}
	i = ft_strclen(buffer, '\0');
	*out = copy_buffer(*out, buffer, i);
	if (*out == NULL)
		return (ERROR);
	if (i < *size)
	{
		*size = *size - i - 1;
		ft_strncpy(buffer, buffer + i + 1, *size);
		return (ONE_LINE);
	}
	else
		*size = 0;
	return (LOOP);
}

/*
** GET_ALL_LINES allocates the entire file (whitout skipping newlines)
*/
int				get_all_lines(int fd, char **line)
{
	static char			buf[BUFFER_SIZE + 1];
	static int			size;
	char				*out;
	t_state				ret;

	out = NULL;
	ret = LOOP;
	while (ret == LOOP)
		ret = read_line(fd, buf, &out, &size);
	if (ret == ONE_LINE)
		*line = out;
	if (ret == END_FILE)
	{
		*line = copy_buffer(out, "", 0);
		if (*line == NULL)
			return (ERROR);
	}
	return (ret);
}
