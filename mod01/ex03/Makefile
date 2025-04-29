SRC= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra

CC = c++

RM = rm -f

NAME = battle

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "Battlllllllllle!!"

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
