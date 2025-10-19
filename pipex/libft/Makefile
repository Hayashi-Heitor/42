NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC = src/ft_args.c src/ft_args_char.c src/ft_args_int.c src/ft_args_ptr.c src/ft_args_str.c src/ft_args_uns_int.c \
      src/ft_atoi.c src/ft_bzero.c src/ft_calloc.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c src/ft_isprint.c \
      src/ft_itoa.c src/ft_memchr.c src/ft_memcpy.c src/ft_memcmp.c src/ft_memmove.c src/ft_memset.c src/ft_putchar.c src/ft_putchar_fd.c src/ft_putendl_fd.c src/ft_putnbr.c \
      src/ft_putstr.c src/ft_split.c src/ft_strchr.c src/ft_strdup.c src/ft_striteri.c src/ft_strjoin.c src/ft_strlcat.c src/ft_strlcpy.c \
      src/ft_strlen.c src/ft_strmapi.c src/ft_strncmp.c src/ft_strnstr.c src/ft_strrchr.c src/ft_strtrim.c src/ft_substr.c src/ft_tolower.c src/ft_toupper.c \
      src/ft_printf.c src/ft_put_hex.c src/ft_uitoa.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
