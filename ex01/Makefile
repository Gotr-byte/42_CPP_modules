NAME := phonebook
SRCFILES := ./main.cpp \
			./Contact.cpp \
			./PhoneBook.cpp 

CPP = c++ -std=c++98
CPPFLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPCFLAGS) $(SRCFILES) -o $(NAME) 

clean:
	rm $(NAME);

fclean:
	rm $(NAME);

re:		fclean all

.PHONY: clean fclean re
