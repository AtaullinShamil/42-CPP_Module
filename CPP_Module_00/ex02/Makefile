# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 11:36:58 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/25 11:50:06 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = Account
CC    = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra
RM    = rm -f
OBJ   = $(SRC:.cpp=.o)

SRC			= tests.cpp Account.cpp
HEADER		= Account.hpp


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
