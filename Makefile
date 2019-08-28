NAME = colle-2
CC = gcc -Wall -Werror -Wextra -o
SRC = ./srcs/*.c
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(NAME) $(SRC) -I includes

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) 

re: fclean all
