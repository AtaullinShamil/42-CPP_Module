# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 02:04:48 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/29 02:57:36 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ		 = $(SRC:.cpp=.o)

SRC		= main.cpp

all: $(NAME)

%.o : %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

