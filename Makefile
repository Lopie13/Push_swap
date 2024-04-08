NAME = push_swap.a

SRCS = #include all, with all the necessary paths

OBJ = $ (SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -r $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re