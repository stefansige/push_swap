NAME = push_swap
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
SRC = push_swap.c \
	initial.c \
	solve1.c \
	solve2.c \
	oprtns1.c \
	oprtns2.c \
	ft_action.c \
	opract.c \
	ft_correct.c \
	ft_exit.c \
	solve3.c	\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
