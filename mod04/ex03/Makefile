SRC= AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -g

CC = c++

RM = rm -f

NAME = materia

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
