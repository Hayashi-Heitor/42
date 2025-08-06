NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror -I. -Ilibft

SRC := src/ft_args.c src/ft_printf.c src/ft_args_char.c src/ft_putchar.c src/ft_args_ptr.c\
	   src/ft_args_int.c src/ft_args_str.c src/ft_put_hex.c src/ft_uitoa.c\
	   src/ft_args_uns_int.c

OBJ := $(SRC:.c=.o)

LIBFT_DIR := libft
LIBFT_A := $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT_A)
	cp $(LIBFT_A) .
	ar -x libft.a
	ar rcs $(NAME) $(OBJ) *.o
	rm -f libft.a *.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -f *.o
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f libft.a
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re