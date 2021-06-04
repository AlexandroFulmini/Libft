
NAME = libft.a

SRC = $(wildcard *.c)

HEADER = libft.h

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror	

RM = rm -rf

AR = ar rc
			

$(NAME):	$(OBJ)
	@echo "Making assignment"
	@$(AR) $(NAME) $(OBJ) $(HEADER)

.c.o:
	@echo "Compiling $@"
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

all: $(OBJ)
	@echo "Making Library"
	@$(AR) $(NAME) $(OBJ)


clean:
	@echo "Removing regular files"
	@$(RM) $(OBJ)

fclean: clean
	@echo "Removing lib"
	@$(RM) $(NAME)
	@$(RM) $(OBJ)
	@echo "Removing files *.o  ... \033[32mok\033[0m"


re: fclean all

.PHONY: all clean fclean re
