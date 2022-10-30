# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 20:35:28 by dicisner          #+#    #+#              #
#    Updated: 2022/07/07 23:34:08 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

OBJ_DIR = build
SRC_DIR = src

SRCS = Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \
	main.cpp

SRC_FULL = $(addprefix $(SRC_DIR)/, $(SRCS))

OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FULL))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean:
	rm -rf $(NAME)

re: fclean all