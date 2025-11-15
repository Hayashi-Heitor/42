NAME = pipex
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude -Ilibft/include

SRC = src/main.c src/exec_cmd.c src/utils.c src/find_cmd_path.c src/input_handle.c																	
OBJ = $(SRC:.c=.o)

all: libft $(NAME)

libft:
	$(MAKE) -C libft																

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C libft

re: fclean all

.PHONY: all clean fclean re libft
