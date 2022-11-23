# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 11:00:02 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/23 11:07:38 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = c++ -std=c++98
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJ = $(SRC:.cpp=.o)
SRC = main.cpp
HEADER = header.hpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

*.o : $(SRC) $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
