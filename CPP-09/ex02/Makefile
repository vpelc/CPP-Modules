# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 17:59:30 by vpelc             #+#    #+#              #
#    Updated: 2026/01/08 13:51:09 by vpelc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME				= PmergeMe

# Compiler and CFlags
CC                  = c++
CFLAGS              = -Wall -Werror -Wextra -std=c++98 -g3
RM                  = rm -rf

# Source files
SRCS				= main.cpp \
					pmergeme/PmergeMe.cpp \
					checks/check_arg.cpp \
					utils/fill.cpp \
					utils/prints.cpp


# Object directory
OBJDIR = obj

# Object files 
OBJ = $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
#	@echo "\033[1;32mFile $@ created.\033[0m";

$(NAME): $(OBJ) 
	@echo "\033[1;36mCompiling...\033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32mDone.\n\033[0m"

clean:
	@echo "\033[1;35mRemoving obj/...\033[0m"
	@$(RM) -r $(OBJDIR)
	@echo "\033[1;32mAll Done for clean.\n\033[0m"

fclean: clean
	@echo "\033[1;35mRemoving exec...\033[0m"
	@$(RM) $(NAME)
	@echo "\033[1;32mDone.\n\033[0m"

re: fclean obj all

#debug: $(CFLAGS) += -g3 -D DEBUG=1
#debug: re

.PHONY: all obj clean fclean re 