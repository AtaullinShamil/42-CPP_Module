NAME	= Conversion
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ		= $(SRC:.cpp=.o)

SRC		= main.cpp Conversion.cpp
HEADER	= Conversion.hpp

all: $(NAME)

%.o : %.cpp $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
