NAME := megaphone
SRCFILES := megaphone.cpp

CC = c++
CFLAGS = -std=c++98 -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCFILES) -o $(NAME) 
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
	
re:		fclean all

.PHONY: clean fclean re