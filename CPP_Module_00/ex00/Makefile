# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 13:17:26 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/23 11:08:58 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = megaphone
CC    = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra
RM    = rm -f
SRC   = megaphone.cpp
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
