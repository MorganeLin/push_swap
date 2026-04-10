NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g 

SRC = main.c list.c parsing.c push.c swap.c verif_num.c check.c
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
LIBFT = ./libft/libft.a
OBJ_DIR = build

all: $(NAME)

$(LIBFT):
	@make -C ./libft 1>/dev/null

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) -I./includes -I./libft
	@echo "Compilation successful!"

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ -I./includes -I./libft

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@make clean -C ./libft 1>/dev/null
	@rm -rf $(OBJ_DIR)

fclean: clean
	@make fclean -C ./libft 1>/dev/null
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re
