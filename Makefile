NAME_C = client
NAME_S = server
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC_S = server.c
OBJ_S = $(SRC_S:.c=.o)
SRC_C = client.c
OBJ_C = $(SRC_C:.c=.o)
RM = rm -f

all: client server

server: libft $(OBJ_S)
	$(CC) $(FLAGS) -o $(NAME_S) $(OBJ_S) libft/*.o

client: libft $(OBJ_C)
	$(CC) $(FLAGS) -o $(NAME_C) $(OBJ_C) libft/*.o

libft:
	make -C libft/

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_S) $(OBJ_C)
	make -C libft/ clean

fclean: clean
	$(RM) $(NAME_S) $(NAME_C)
	make -C libft/ fclean

re: fclean all

.PHONY: all libft clean fclean re

