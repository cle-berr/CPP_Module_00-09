NAME = phonebook

SRC = phonebook.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(SRC) -o $(NAME)
		@echo "\033[32m$(NAME) has been compiled successfully!\033[0m"

clean:

fclean: clean
		rm -f $(NAME)

re: fclean all