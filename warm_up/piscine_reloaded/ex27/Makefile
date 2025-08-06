CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := ft_display_file

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) ft_display_file.c -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
