SRC= Animal.cpp Dog.cpp main.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -g

CC = c++

RM = rm -f

NAME = animal

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
