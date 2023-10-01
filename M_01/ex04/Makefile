EXEC    = Newton
FLAGS   = -std=c++98 -fsanitize=address -Wall -Wextra -Werror -g
H_FILES = ${shell ls *.hpp}
C_FILES = ${shell ls *.cpp}

all: $(C_FILES) $(H_FILES)
	c++ $(C_FILES) $(FLAGS) -o $(EXEC)
	# clear
	./$(EXEC) file a b

re: fclean all

fclean:
	rm -rf $(EXEC)
	rm -rf .vscode

.PHONY: all fclean re