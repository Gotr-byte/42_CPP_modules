NAME := contacts
SRCFILES := ./main.cpp \
			./Contact.cpp \
			./PhoneBook.cpp 

CPP = c++ -std=c++98
CPPFLAGS = -Wextra -Werror -Wall
OBJS := $(SRCFILES:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPCFLAGS) $(SRCFILES) $(LIBFT_EXEC) -o $(NAME) 
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
	
re:		fclean all

.PHONY: clean fclean re
