NAME     = megaphone
CC       = c++
RM       = rm -f
CFLAGS   = -Wall -Wextra -Werror -std=c++98
SOURSES  = megaphone.cpp
OBJECTS  = $(SOURCES:.cpp=.o)

all    : $(NAME)

NAME   : $(SOURCES) $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $(NAME)

clean  :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re     : fclean $(NAME)

.PHONY: all clean fclean re
