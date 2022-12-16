# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 13:51:30 by ntojamur          #+#    #+#              #
#    Updated: 2022/12/16 13:51:31 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Interface
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ		= $(SRC:.cpp=.o)

SRC			= main.cpp Ice.cpp AMateria.cpp Character.cpp Cure.cpp MateriaSource.cpp
HEADER		= ICharacter.hpp Ice.hpp AMateria.hpp Character.hpp IMateriaSource.hpp Cure.hpp MateriaSource.hpp

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
