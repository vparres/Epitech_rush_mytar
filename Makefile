##
## Makefile for my_tar in /home/tails/Perso/Git/CPE_2016_b2rush1
##
## Made by Miles PROWER
## Login   <tails@epitech.net>
##
## Started on  Fri Mar  3 21:31:50 2017 Miles PROWER
## Last update Sat Mar  4 15:47:05 2017 Adrien KELLER
##

NAME		= 	my_tar

NAME_TAR	=	my_archive

NAME_UNTAR	=	my_unarchive

CC		= 	gcc

CFLAGS		=	-Iinclude

LDFLAGS		=

SRC		= 	src/tar/tar.c

SRC_TAR		=	src/archive/archive.c			\
						src/archive/create_file.c

SRC_UNTAR	=	src/unarchive/unarchive.c

OBJ		= 	$(SRC:.c=.o)

OBJ_TAR		=	$(SRC_TAR:.c=.o)

OBJ_UNTAR	=	$(SRC_UNTAR:.c=.o)

all : 			$(NAME) $(NAME_TAR) $(NAME_UNTAR)

$(NAME):		$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

$(NAME_TAR):		$(OBJ_TAR)
			$(CC) $(CFLAGS) -o $(NAME_TAR) $(OBJ_TAR) $(LDFLAGS)

$(NAME_UNTAR):		$(OBJ_UNTAR)
			$(CC) $(CFLAGS) -o $(NAME_UNTAR) $(OBJ_UNTAR) $(LDFLAGS)

clean:
			rm -f $(OBJ)
			rm -f $(OBJ_TAR)
			rm -f $(OBJ_UNTAR)

fclean: 		clean
			rm -f $(NAME)
			rm -f $(NAME_TAR)
			rm -f $(NAME_UNTAR)

re: 			fclean all

.PHONY: 		re clean fclean all
