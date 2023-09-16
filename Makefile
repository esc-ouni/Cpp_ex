all: megaphone.cpp
	c++ megaphone.cpp -std=c++98 -Wall -Wextra -Werror -o megaphone
	clear
	./megaphone

re: fclean all

fclean:
	rm -rf megaphone
	rm -rf .vscode

.PHONY: all fclean re