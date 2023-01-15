# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 15:20:19 by ntojamur          #+#    #+#              #
#    Updated: 2023/01/15 15:20:20 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Dynamic_cast
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ		= $(SRC:.cpp=.o)

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
