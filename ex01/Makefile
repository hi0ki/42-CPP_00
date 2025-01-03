C++ = C++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone


SRC = phonebook.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) phonebook.hpp
	$(C++) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all