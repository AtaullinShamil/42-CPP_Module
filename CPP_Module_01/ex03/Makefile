# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 02:08:23 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/29 01:04:30 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= weapon
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ = $(SRC:.cpp=.o)

SRC		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HEADER	= HumanA.hpp HumanB.hpp Weapon.hpp

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
