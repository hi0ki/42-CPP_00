C++ = c++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(OBJ) -o $(NAME) 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all