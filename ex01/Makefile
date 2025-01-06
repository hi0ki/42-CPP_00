C++ = C++ -Wall -Wextra -Werror -std=c++98
NAME = phonebook


SRC = phonebook.cpp utils.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) PhoneBook.hpp Contact.hpp
	$(C++) -o $(NAME) $(OBJ)

%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(C++) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all