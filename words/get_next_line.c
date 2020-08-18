/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/08 21:54:03 by swofferh      #+#    #+#                 */
/*   Updated: 2020/08/18 17:02:31 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

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
	i = ft_strclen(buffer, '\n');
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

int				get_next_line(int fd, char **line)
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
