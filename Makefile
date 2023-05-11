CLIENT	=	client
SERVER	=	server

#ft_printf Variables:
LIBFT	=	libft/libft.a
LIBFT_DIR	=	libft

#minitalk variables
SRC_C	=	client.c
SRC_S	=	server.c
OBJ_S	=	server.o
OBJ_C	=	client.o

#Compiling Variables:
CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror
RM			=	rm -rf

all: $(CLIENT) $(SERVER)
$(SERVER): $(OBJ_S)
	@ ar rcs $(SERVER) $(OBJ_S)
$(OBJ_S): $(SRC_S)
	@ $(CC) $(CFLAGS) -c $(SRC_S)

$(CLIENT): $(OBJ_C)
	@ ar rcs $(CLIENT) $(OBJ_C)
$(OBJ_C): $(SRC_C)
	@ $(CC) $(CFLAGS) -c $(SRC_C)

	@ make -C libft all

clean:
	@ $(RM) $(OBJ_C) $(OBJ_S) $(LIBFT_DIR)/*.o

fclean: clean
	@ $(RM) $(CLIENT) $(SERVER) $(LIBFT_DIR)/$(LIBFT)

re: fclean all

.PHONY: all clean fclean re