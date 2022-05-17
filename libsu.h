#ifndef LIBSU_H
# define LIBSU_H

# include "libft.h"

// ABOUT THIS LIBRARY

// Added functions:
int			        ft_maxof(int v1, int v2);

// Handling spaces:
int					ft_words(char const *str, char space);
int					ft_wordlen(char const *str, int i, char space);
char                *ft_nospace(char *line);

// Returning length:
int                 ft_numlen(int n);
size_t				ft_lenbase(long long nbr, int base);
int     			ft_textsize(const char *str);

// libft upgrades:

int                 ft_strclen(char *str, char c);
//   ft_strncpy
//   ft_isupper
//   ft_islower

//   ft_putlen
//   ft_puthexa
//   ft_putocta
void			    ft_prints(const char *str, ...);


int				    ft_printf(const char *str, ...);
int				    get_next_line(int fd, char **line);
int 				get_all_lines(int fd, char **line);

#endif