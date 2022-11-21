# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 13:17:26 by ntojamur          #+#    #+#              #
#    Updated: 2022/11/21 13:17:33 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = megaphone
CC    = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra
OBJ   = $(SRC:.cpp=.o)
SRC   = megaphone.cpp
RM    = rm -f

all    : $(NAME)

%.o    : %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean  :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re     : fclean all

.PHONY : all clean fclean re
