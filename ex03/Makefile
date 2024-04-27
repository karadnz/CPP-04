NAME		= game
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -Iinclude -Iinterface -Iwrong -g
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main src/AMateria src/Character src/Cure src/Ice src/MateriaSource

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= include/Character.hpp include/Cure.hpp include/Ice.hpp include/MateriaSource.hpp interface/AMateria.hpp interface/ICharacter.hpp interface/IMateriaSource.hpp

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