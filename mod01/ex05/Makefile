SRC= main.cpp Harl.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra

CC = c++

RM = rm -f

NAME = harl

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "Harl"

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
