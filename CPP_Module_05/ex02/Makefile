# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 17:01:29 by ntojamur          #+#    #+#              #
#    Updated: 2023/01/13 00:31:10 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Form
CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBJ		= $(SRC:.cpp=.o)

SRC		=	Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp
HEADER	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp

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
