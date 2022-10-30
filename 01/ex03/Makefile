NAME = unnecessary_violence

COMPILER = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = build
SRC_DIR = src

SRCS = Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp \
	main.cpp \

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