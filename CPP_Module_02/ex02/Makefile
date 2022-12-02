# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 09:14:41 by ntojamur          #+#    #+#              #
#    Updated: 2022/12/02 09:15:53 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ		 = $(SRC:.cpp=.o)

SRC		= main.cpp Fixed.cpp
HEADER	= Fixed.hpp

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
