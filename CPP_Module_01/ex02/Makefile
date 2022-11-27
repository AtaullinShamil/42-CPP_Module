# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 01:16:54 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/28 01:34:17 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = reference
CC    = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra
RM    = rm -f
SRC   = main.cpp
OBJ   = $(SRC:.cpp=.o)

all    : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o    : %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean  :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re     : fclean all

.PHONY : all clean fclean re

