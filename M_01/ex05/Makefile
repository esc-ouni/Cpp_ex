# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 17:43:46 by idouni            #+#    #+#              #
#    Updated: 2023/10/27 18:04:11 by idouni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


EXEC    = Harl
CC      = c++
RM      = rm -rf
FLAGS   = -std=c++98 -Wall -Wextra -Werror
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