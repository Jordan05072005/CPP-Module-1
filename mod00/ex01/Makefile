SRC= main.cpp Contact.cpp PhoneBook.cpp

OBJ =${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra

CC = c++

RM = rm -f

NAME = phoneBook

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "PhoneBook is Ready !" 

clean : 
	@${RM} *.o

fclean : clean
	@${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
