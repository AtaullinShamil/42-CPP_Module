# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 17:18:39 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/28 01:14:20 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Horde
CC		= clang++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ = $(SRC:.cpp=.o)

SRC		= main.cpp Zombie.cpp zombieHorde.cpp
HEADER	= Zombie.hpp

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
