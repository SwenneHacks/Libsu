# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 21:39:04 by swofferh      #+#    #+#                  #
#    Updated: 2020/09/09 18:22:37 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 	= 	liblist.a
INC 	=	liblist.h
CFLAGS 	= 	-Wall -Wextra -Werror

SRC =	lst_reverse.c lst_move_front.c lst_move_back.c \
		lst_last.c lst_add_back.c lst_del_one.c \
	 	lst_new.c lst_add_front.c lst_size.c \
		lst_clear.c lst_map.c lst_fun.c \

OBJ = $(SRC:%.c=%.o)

# COLORS
PINK	= \x1b[35m
BLUE	= \x1b[34m
YELLOW	= \x1b[33m
LOVE	= \x1b[36m
GREEN	= \x1b[32m
RED		= \x1b[31m
RESET	= \x1b[0m

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	@$(AR) rcs $@ $^
	@ranlib $(NAME)
	@mkdir -p obj
	@mv $(OBJ) obj
	
$(LIB):
	@echo "$(Y)NOW $(W)libft"
	@$(MAKE) -C ../libft

%.o: %.c
	@echo "$(GREEN)Compiling$(RESET) $< $@"
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	@echo "\n$(RESET)	   Done"
	@echo "	$(PINK)RE$(GREEN)COM$(YELLOW)PI$(BLUE)LING"
	@echo "	$(RESET)   Liblist\n"
