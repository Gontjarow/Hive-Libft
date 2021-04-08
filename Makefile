# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 13:15:52 by ngontjar          #+#    #+#              #
#    Updated: 2020/08/23 06:53:07 by ngontjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# https://www.gnu.org/software/make/manual/make.html
# http://nuclear.mutantstargoat.com/articles/make/#multiple-source-directories
# https://www.oreilly.com/library/view/managing-projects-with/0596006101/ch12.html

NAME := libft.a
PRINTF := printf.a

SRC_DIR := ./src
OBJ_DIR := ./obj
DEP_DIR := $(OBJ_DIR)
INC_DIRS := . $(SRC_DIR)

SRC_TEST = ./test
TEST_DIR = $(SRC_TEST)/bin

# CC:        Program for compiling C programs; default cc
# CFLAGS:    Extra flags to give to the C compiler
# CPPFLAGS:  Extra flags to give to the C preprosessor
# LDFLAGS:   Extra flags to give to compilers when they are supposed to invoke the linker

CC := gcc
INC_FLAGS := $(addprefix -I,$(INC_DIRS))
CFLAGS := $(INC_FLAGS) -MMD -MP -g -Wall -Wextra

# Pattern substitution
# Syntax:     $(patsubst pattern,replacement,text)
# Shorthand:  $(text:pattern=replacement)
# Wildcard (preserved): %

SRC_BASE := $(wildcard $(SRC_DIR)/*.c)
OBJ_BASE := $(SRC_BASE:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
DEP_BASE := $(OBJ_BASE:.o=.d)

SRC_PRINTF := $(wildcard $(SRC_DIR)/printf/*.c)
OBJ_PRINTF := $(SRC_PRINTF:$(SRC_DIR)/printf/%.c=$(OBJ_DIR)/%.o)
DEP_PRINTF := $(OBJ_PRINTF:.o=.d)

MSG = \033[38;5;214m
OK = \033[38;5;154m
END = \033[0m

.PHONY: all re fclean clean test

# Automatic variables
# target name:          $@
# all prerequisites:    $^
# first prerequisite:   $<
# newer-than-target:    $?

all: $(NAME) $(PRINTF)
	ar -rc $(NAME) $(OBJ_PRINTF)
	@echo "$(OK)OK:\tAll done!$(END)"

$(NAME): $(OBJ_BASE)
	@ar -rc $@ $^
	@echo "$(OK)OK:\tBase done!$(END)"

$(PRINTF): $(OBJ_PRINTF)
	@ar -rc $@ $^
	@echo "$(OK)OK:\tPrinf done!$(END)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo "$(MSG)libft\t $(notdir $@)$(END)"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/printf/%.c
	@mkdir -p $(dir $@)
	@echo "$(MSG)printf\t $(notdir $@)$(END)"
	@$(CC) $(CPPFLAGS) -I$(SRC_DIR)/printf $(CFLAGS) -L. -lft -c $< -o $@

re: fclean all

fclean: clean
	@rm -f $(NAME)
	@rm -f $(PRINTF)
	@rm -rf $(TEST_DIR)
	@echo "$(MSG)Archives and tests removed!$(END)"

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f libft.h.gch printf/ft_printf.h.gch
	@echo "$(MSG)Objects and precompiled headers removed!$(END)"

# Usage: make test file=putendl

test: all
	@mkdir -p $(TEST_DIR)
	@echo "$(MSG)Compiling $(SRC_TEST)/$(file).c ...$(END)"
	@gcc $(CFLAGS) $(SRC_TEST)/$(file).c -o $(TEST_DIR)/$(file) -I. -L. -lft
	@echo "$(MSG)Running $(TEST_DIR)/$(file) ...$(END)"
	@$(TEST_DIR)/$(file)

-include $(DEP_BASE)
