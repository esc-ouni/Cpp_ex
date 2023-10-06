EXEC    = Newton
FLAGS   = -std=c++98 #-fsanitize=address -Wall -Wextra -Werror -g
H_FILES = ${shell ls *.hpp}
C_FILES = ${shell ls *.cpp}

all: $(C_FILES) $(H_FILES)
	clear
	c++ $(C_FILES) $(FLAGS) -o $(EXEC)
	./$(EXEC) 

re: fclean all

fclean:
	rm -rf $(EXEC)
	rm -rf .vscode
	rm -rf *.dSYM

.PHONY: all fclean re