# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 21:39:04 by swofferh      #+#    #+#                  #
#    Updated: 2020/08/24 23:48:54 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a
INC 	=	libsu.h
CFLAGS 	= 	-Wall -Wextra -Werror
SRC 	= 	ft_atoi.c ft_islower.c ft_memccpy.c ft_prints.c ft_putnbr_fd.c \
			ft_strdup.c ft_strncpy.c ft_wordlen.c ft_putchar.c ft_putocta.c \
			ft_bzero.c ft_isprint.c ft_memchr.c ft_strjoin.c ft_strnstr.c \
			ft_words.c ft_calloc.c ft_isspace.c ft_memcmp.c ft_putchar_fd.c \
			ft_putstr.c ft_strlcat.c ft_strrchr.c get_next_line.c ft_isalnum.c\
			ft_isupper.c ft_memcpy.c ft_putendl.c ft_putstr_fd.c ft_strlcpy.c\
			ft_strtrim.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putendl_fd.c \
			ft_split.c ft_strlen.c ft_substr.c ft_isascii.c ft_lenbase.c \
			ft_memset.c ft_puthexa.c ft_strchr.c ft_strmapi.c ft_tolower.c \
			ft_isdigit.c ft_maxof.c ft_numlen.c ft_putnbr.c ft_strclen.c \
			ft_strncmp.c ft_toupper.c ft_memlen \

DIR	= all
OBJ = $(SRC:%.c=%.o)

# COLORS
RED		= \x1b[31m
PINK	= \x1b[35m
BLUE	= \x1b[34m
RESET	= \x1b[0m
GREEN	= \x1b[32m
YELLOW	= \x1b[33m

all: $(NAME)

$(NAME): $(OBJ)
	@echo ""
	@echo "$(YELLOW)		Linking library..."
	@$(AR) rcs $@ $^
	@ranlib $(NAME)
	@mkdir -p obj
	@mv $(OBJ) obj
	@echo "$(GREEN)~~~~~~~~~ Done \n"

%.o: $(DIR)/%.c
	@echo "$(PINK)Compiling$(RESET) $< $@"
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	@$(RM) -rf obj
	@echo "$(GREEN)$@ $(PINK)libft"
	@echo "$(YELLOW)~~~~~~~~~~~~ Done\n"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)$@ $(PINK)libft"
	@echo "$(YELLOW)~~~~~~~~~~~~ Done\n"

re: fclean all
	@echo "\n$(RESET)	   Done"
	@echo "	$(PINK)RE$(GREEN)COM$(YELLOW)PI$(BLUE)LING"
	@echo "	$(RESET)   Libft\n"
