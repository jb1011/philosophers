NAME = philosophers
SRC = main.c srcs/ft_itoa.c srcs/ft_strlen.c srcs/ft_strncmp.c srcs/utils.c
OBJ = $(SRC:.c=.o)
HEADER = ./Include/
CFLAGS = -Wall -Werror -Wextra -g -I $(INCLUDE) -pthread
CC = gcc


all : $(NAME)
	
$(NAME): $(OBJ)
	$(CC) $^ -o $@

$(OBJ) : %.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re