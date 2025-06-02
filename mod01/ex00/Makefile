SRC= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

RM = rm -f

NAME = zombie

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "This is the start for the invation Zombie !"

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
