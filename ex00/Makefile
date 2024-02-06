NAME		= animal
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -Iinclude -Iwrong
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main src/Animal src/Dog src/Cat wrong/WrongAnimal Wrong/WrongCat

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= include/Animal.hpp include/Cat.hpp include/Dog.hpp wrong/WrongAnimal.hpp wrong/WrongCat.hpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@printf "Executable ready.\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "Object files removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "Executable removed.\n"

re: fclean all