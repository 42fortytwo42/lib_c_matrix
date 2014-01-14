#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/01/14 19:56:01 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmatrix.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libmatrix.h

SRC =	absolute_this_tri_dimensional_by_point.c \
		absolute_this_tri_dimensional_by_vector.c \
		find_normal_vector.c \
		movement_vectorial_translatory_to_object.c \
		movement_vectorial_translatory_to_point.c \
		scalar_product.c \
		vector_product.c \
		vectorize_my_points.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet LIBCOLOR --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo Conception librairie libmatrix.a
		@echo -----------------------------
		@echo --- Compilation en cours ----
		$(CC) $(CFLAGS) $(SRC)
		@echo --- Compilation terminee ----
		@echo -----------------------------
		@echo --- Creation librairie ------
		$(AR) $(NAME) $(OBJ) $(HEADER)
		@echo --- librairie disponible ----
		@echo -----------------------------
		@echo indexation de la librairie en cours
		@echo -----------------------------
		$(RANLIB) $(NAME)
		@echo -----------------------------
		@echo indexation de la librairie effectue
		@echo -----------------------------
		@echo Conception librairie libmatrix.a OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
