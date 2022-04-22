# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 09:54:53 by nprimo            #+#    #+#              #
#    Updated: 2022/04/22 17:41:31 by nprimo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -g -Wall -Wextra -lreadline
RM = rm -rf

NAME = parser

SRC = src
OBJ = obj
INC = inc
SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

LIBFTDIR = ./libft/ 
LIB = ./libft/libft.a

$(OBJ)/%.o: $(SRC)/%.c
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(LIB) -o $@ $^

$(LIB):
	$(MAKE) -C $(LIBFTDIR) 
	cp $(LIB) $(NAME)

clean:
	$(RM) $(wildcard $(OBJ)/*.o)

fclean: clean
	$(RM) $(NAME)

re: fclean all

