NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

SRC = compare_args.c ft_atoi.c list.c parsing.c push_a.c swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

#$(NAME): $(OBJ)
#	ar rcs $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

