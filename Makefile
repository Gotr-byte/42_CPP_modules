NAME := phonebook
SRCFILES := ./main.cpp \
			./Contact.cpp \
			./PhoneBook.cpp 

CPP = c++ -std=c++98
CPPFLAGS = -fsanitize -g -Wextra -Werror -Wall

all: $(NAME)

$(NAME):
	$(CPP) $(CPPCFLAGS) $(SRCFILES) -o $(NAME) 

clean:
	rm $(NAME);

re:		clean all

.PHONY: clean fclean re
