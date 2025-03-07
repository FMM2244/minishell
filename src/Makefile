# -*- Makfile -*-

CC = cc
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -ltermcap
SRC = minishell.c 
OBJ = $(SRC:.c=.o)
NAME = minishell
LIBFT = libft.a
LIBFTDIR = libft/libft.a

all: $(NAME)
	$(CC) $(CFLAGS) $(OBJ) -I$(LIBFTDIR) -lft -L$(LIBFT)

$(NAME): $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBFT)

re: fclean all

.PHONY: all re clean fclean