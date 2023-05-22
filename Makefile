NAME_C = client
NAME_S = server

NAME_CBONUS = client_bonus
NAME_SBONUS = server_bonus

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_S = server.c
OBJ_S = $(SRC_S:.c=.o)
SRC_C = client.c
OBJ_C = $(SRC_C:.c=.o)

SRC_CBONUS = client_bonus.c
OBJ_CBONUS = $(SRC_CBONUS:.c=.o)
SRC_SBONUS = server_bonus.c
OBJ_SBONUS = $(SRC_SBONUS:.c=.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

bonus:  all client_bonus server_bonus
client_bonus: libft $(OBJ_CBONUS)
	@ $(CC) $(FLAGS) -o $(NAME_CBONUS) $(OBJ_CBONUS) libft/*.o

server_bonus: libft $(OBJ_SBONUS)
	@ $(CC) $(FLAGS) -o $(NAME_SBONUS) $(OBJ_SBONUS) libft/*.o

all: client server
server: libft $(OBJ_S)
	@ $(CC) $(FLAGS) -o $(NAME_S) $(OBJ_S) libft/*.o

client: libft $(OBJ_C)
	@ $(CC) $(FLAGS) -o $(NAME_C) $(OBJ_C) libft/*.o

libft:
	@ make -C libft/

clean:
	@ $(RM) $(OBJ_S) $(OBJ_C) $(OBJ_SBONUS) $(OBJ_CBONUS)
	@ make -C libft/ clean

fclean: clean
	@ $(RM) $(NAME_S) $(NAME_C) $(NAME_SBONUS) $(NAME_CBONUS)
	@ make -C libft/ fclean

re: fclean all

.PHONY: all libft clean fclean bonus re client_bonus server_bonus client server