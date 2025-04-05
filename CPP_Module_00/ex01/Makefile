NAME = phone

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[32mCompiled $(NAME) successfully!\033[0m"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "Make correctely clean"

fclean: clean
	rm -f $(NAME)
	@echo "Suppresed $(NAME) successfully"

re: fclean all

.PHONY: all clean fclean re