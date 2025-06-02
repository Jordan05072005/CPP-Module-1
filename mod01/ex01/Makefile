SRC= main.cpp ZombieHorde.cpp Zombie.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

RM = rm -f

NAME = zombieHorde

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "Attention! A Horde of BOB is going!!"

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
