EXEC     = megaphone
H_FILES = ${shell ls *.hpp}
C_FILES = ${shell ls *.cpp}

all: $(C_FILES) $(H_FILES)
	c++ $(C_FILES) -std=c++98 -Wall -Wextra -Werror -o $(EXEC)
	clear
	./$(EXEC)

re: fclean all

fclean:
	rm -rf $(EXEC)
	rm -rf .vscode

.PHONY: all fclean re