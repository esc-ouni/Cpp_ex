# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 11:19:01 by idouni            #+#    #+#              #
#    Updated: 2023/10/22 18:46:34 by idouni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC    = Serena
CC      = g++
RM      = rm -rf
FLAGS   = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -Wall -Wextra -Werror -g
H_FILES = ${shell ls *.hpp}
C_FILES = ${shell ls *.cpp}
OBJS    = $(C_FILES:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS) $(H_FILES)
	@$(CC) $(FLAGS) $(OBJS) -o $(EXEC)
	@clear && echo "==$(EXEC)_compiled==========="


%.o: %.cpp $(H_FILES)
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)
	@clear && echo "==Object_files_deleted======="

fclean: clean
	$(RM) $(EXEC)
	$(RM) .vscode
	$(RM) *.dSYM
	@clear && echo "==All_created_files_deleted=="

re: fclean all
	@clear && echo "==Compilation_reseted========"

.PHONY: all clean fclean re