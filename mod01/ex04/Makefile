SRC= main.cpp ReplaceLine.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

RM = rm -f

NAME = replace

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "Replace in file"

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
