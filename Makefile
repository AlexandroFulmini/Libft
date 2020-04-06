NAME = libft.a

SRC = $(wildcard *.c)
HEADER = libft.h

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror	

RM = rm -rf
			
all:	$(NAME)

$(NAME):	$(OBJ)
	@echo "Making library"
	@ar rc $(NAME) $(OBJ) $(HEADER)

.c.o:
	@echo "Compiling $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing .o files"
	@$(RM) $(OBJ)

fclean: clean
	@echo "Removing lib"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
