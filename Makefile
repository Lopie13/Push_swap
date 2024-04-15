# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 12:18:35 by mmata-al          #+#    #+#              #
#    Updated: 2024/04/10 12:18:36 by mmata-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT				= ./libft+/libft.a
SRC_DIR				= srcs/
OBJ_DIR				= obj/

#Sources:
PUSHSWAP	=	$(SRC_DIR)commands/push.c \
						$(SRC_DIR)commands/rev_rotate.c \
						$(SRC_DIR)commands/rotate.c \
						$(SRC_DIR)commands/sort_stks.c \
						$(SRC_DIR)commands/sort_3.c \
						$(SRC_DIR)commands/swap.c

commands	=	$(SRC_DIR)ps_mains/error_handler.c \
						$(SRC_DIR)ps_mains/a_to_b.c \
						$(SRC_DIR)ps_mains/b_to_a.c \
						$(SRC_DIR)ps_mains/push_swap.c \
						$(SRC_DIR)ps_mains/split.c \
						$(SRC_DIR)ps_mains/stack_init.c \
						$(SRC_DIR)ps_mains/stack_utils.c

SRCS = $(PUSHSWAP) $(COMMANDS) 
OBJ = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I
RM = rm -f

start:				
	@make all

$(LIBFT):
	@make -C ./libft+

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@make clean -C ./libft+

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)

re: fclean all

.PHONY: start all clean fclean re