# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 17:42:59 by dicisner          #+#    #+#              #
#    Updated: 2022/10/27 09:05:53 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bureaucrat

SRCS = main.cpp \
	Bureaucrat.cpp


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