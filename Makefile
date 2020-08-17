# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 21:39:04 by swofferh      #+#    #+#                  #
#    Updated: 2020/08/17 22:24:50 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a
INC =	libft.h
CFLAGS = -Wall -Wextra -Werror

SRC = libsu/

OBJ = $(SRC:%.c=%.o)

# COLORS
PINK	= \x1b[35m
BLUE	= \x1b[34m
YELLOW	= \x1b[33m
GREEN	= \x1b[32m
RED		= \x1b[31m
RESET	= \x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo ""
	@echo "$(YELLOW)		Linking library..."
	@$(AR) rcs $@ $^
	@ranlib $(NAME)
	@cp printf.a $(NAME)
	@echo "$(YELLOW)			Linking printf..."
	@mkdir -p obj
	@mv $(OBJ) obj
	@echo "$(GREEN)~~~~~~~~~ Done \n"

%.o: %.c
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
