# Libsu
My ultimate C-Language library (with my own added functions).

[![Logo](https://github.com/qingqingqingli/readme_images/blob/master/codam_logo_1.png)](https://www.codam.nl/en/studying-at-codam)

Overview of functions:

``` 
int         get_next_line(int fd, char **line);
int         ft_printf(const char *str, ...);

/*  Libft MEMORY functions */

void        ft_bzero(void *s, size_t n);
void        *ft_calloc(size_t count, size_t size);
void        *ft_memset(void *b, int c, size_t len);
void        *ft_memchr(const void *s, int c, size_t n);
void        *ft_memcpy(void *dst, const void *src, size_t n);
void        *ft_memccpy(void *dst, const void *src, int c, size_t n);
void        *ft_memmove(void *dst, const void *src, size_t len);
int          ft_memcmp(const void *s1, const void *s2, size_t n);

/*  Libft STRING functions */

size_t      ft_strlen(const char *str);
size_t      ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize);
int         ft_strncmp(const char *s1, const char *s2, size_t n);
int         ft_strcmp(const char *s1, const char *s2);
char        ft_strncpy(char *dst, const char *src, int n);
char        *ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
char        *ft_strdup(const char *s1);
char        **ft_split(char const *s, char c);
char        *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char        *ft_substr(char const *s, unsigned int start, size_t len);
char        *ft_strjoin(char const *s1, char const *s2);
char        *ft_strtrim(char const *s1, char const *set);
char        *ft_strnstr(const char *haystack,const char *needle,size_t len);

/*  Libft ISTRUE functions (4 extras) */

int         ft_isdigit(int c);
int         ft_isalpha(int c);
int         ft_isalnum(int c);
int         ft_isascii(int c);
int         ft_isprint(int c);

int         ft_isnull(int n);
int         ft_isupper(int n);
int         ft_islower(int n);
int         ft_isnumsign(int c);
int         ft_isspace(char c);

/*   Libft 'MAPI' functions */

int         ft_atoi(const char *str);
char        *ft_itoa(int n);

int         ft_toupper(int c);
int         ft_tolower(int c);

/*  Libft PUT/PRINT functions */

void        ft_putchar_fd(char c, int fd);
void        ft_putstr_fd(char *s, int fd);
void        ft_putendl_fd(char *s, int fd);
void        ft_putnbr_fd(int n, int fd);

/* 	Extra functions (outside libft)
*/
long        ft_atol(const char *str);
int         ft_isspace(char c);
int         ft_isupper(int n);
int         ft_islower(int n);
int         ft_isnull(int n);

/*  Extra printing functions 
*/
void        ft_putnbr(int n);
void        ft_putchar(char c);
void        ft_putstr(char *s);
void        ft_putendl(char *s);

void        ft_putoctal(unsigned long n);
void        ft_puthexa(unsigned long n);
void        ft_putbase(long long nbr, int base);

int         ft_less_c_len(char *line, char c);
int         ft_putlen(char c, int len);

/*  Extra STR functions 
*/
char        *ft_strrev(char *s);
char        *ft_strndup(char *s, int start);

/*   Extra LEN functions 
*/
int         ft_numlen(int n);
size_t      ft_lenbase(long long nbr, int base);
int         ft_wordlen(char const *str, int i, char space);
int         ft_strclen(char *str, char c);
int         ft_textsize(const char *str);

/*  Extra WORDS functions
*/
int         ft_words(char const *str, char space);
char        *ft_nospace(char *line);

/*  Extra Array functions 
*/
char        *ft_strjoin_free(char *str1, char *str2);
void        ft_free_array(char **str);
void        ft_print_array(char *array[]);

/*  Operators 
*/
int         ft_maxof(int v1, int v2);

#endif
 ```
