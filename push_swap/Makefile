NAME = push_swap
LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = src/main.c src/parser.c src/utils/ft_isunique.c src/utils/ft_isnumber.c src/operations/swap.c \
	  src/operations/push.c src/operations/rotate.c src/operations/reverse_rotate.c 
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude -I$(LIBFT_DIR)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re