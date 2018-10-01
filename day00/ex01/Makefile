NAME = phone_book

C = clang++

CFLAG = -Wall -Wextra -Werror

INC = -I ./includes

SRC_DIR = src/

SRC = contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

# Colors constants
RED = \033[31m

YELLOW = \033[93m

GREEN = \033[38;5;82m

BLUE = \033[1;34m

RESET = \033[0m

.PHONY: all clean fclean

%.o: $(SRC_DIR)%.cpp
	$(C) $(CFLAG) -o $@ -c $< $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	@$(C) $(CFLAG) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compilation is done$(RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)object files have been cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) has been removed$(RESET)"

re: fclean all
