# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 15:17:50 by mchamma           #+#    #+#              #
#    Updated: 2024/10/08 09:33:33 by mchamma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
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

# ./Account > "$(date +%Y%m%d_%H%M%S).log"
# ./Account > new.log
# cut -c 19- 19920104_091532.log > 19920104_091532b.log
# diff ./log/19920104_091532_b.log output_b.log
# sed -i 's/\[20241008_093215\]/\[19920104_091532\]/g' new.log