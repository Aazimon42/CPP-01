# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/17 17:10:17 by edi-maio          #+#    #+#              #
#    Updated: 2026/04/02 18:23:57 by edi-maio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = phonebook
SRC_DIR = srcs/
SRCS = $(SRC_DIR)main.cpp \
	   $(SRC_DIR)Weapon.cpp \
	   $(SRC_DIR)HumanA.cpp \
	   $(SRC_DIR)HumanB.cpp

OBJ_DIR = objs/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
