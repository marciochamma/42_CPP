# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 15:05:53 by mchamma           #+#    #+#              #
#    Updated: 2024/10/23 14:56:04 by mchamma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++
FLAGS = -std=c++98 -Werror -Wextra -Wall

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(shell find src -name "*.cpp")
OBJ = $(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o,$(SRC))

INC = -I inc/

#--------------------//-------------------#  

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(INC) $(LIB) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	clear

fclean: clean
	rm -f $(NAME)
	clear

re: fclean all

r: fclean all
	make clean

.PHONY: all clean fclean re r

# leaks --atExit -- ./program
