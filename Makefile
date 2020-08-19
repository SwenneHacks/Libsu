# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 21:39:04 by swofferh      #+#    #+#                  #
#    Updated: 2020/08/19 18:44:58 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a
INC 	=	libft.h
CFLAGS 	= 	-Wall -Wextra -Werror

SRC 	= 	all/*.c\

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
	@cp $(NAME) $(PRINTF)
	@echo "$(YELLOW)			Linking printf..."
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
