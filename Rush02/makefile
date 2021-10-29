NAME	= rush-02
SRCS	= main.c check.c dosdigitos.c ft_atoi.c ft_data.c ft_principal.c imprimeposicion.c undigito.c
OBJS	= ${SRCS:.c=.o}
HEADER	= libreria.h

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${SRCS}
			${CC} -c ${CFLAGS} ${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		clean
			fclean
			all
			re

