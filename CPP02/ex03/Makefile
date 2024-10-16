# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 12:27:32 by mchamma           #+#    #+#              #
#    Updated: 2024/10/09 12:15:39 by mchamma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSP
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