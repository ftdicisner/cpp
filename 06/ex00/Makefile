# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 17:42:59 by dicisner          #+#    #+#              #
#    Updated: 2022/10/28 22:58:55 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = conversion

SRCS = main.cpp 

OBJECTS = $(SRCS:.c=.o)

OBJ_DIR = build

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean:
	rm -rf $(NAME)

re: fclean all

test:
	@echo ----test1
	./conversion 0
	@echo ----test2
	./conversion nan
	@echo ----test3
	./conversion 42.0f
	@echo ----test4
	./conversion 0.234