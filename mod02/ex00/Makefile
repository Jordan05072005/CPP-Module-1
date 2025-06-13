SRC= main.cpp Fixed.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

RM = rm -f

NAME = fixed

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
