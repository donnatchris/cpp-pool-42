# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chdonnat <chdonnat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 08:57:59 by chdonnat          #+#    #+#              #
#    Updated: 2025/05/22 08:57:59 by chdonnat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := PmergeMe
INCDIR  := include
SRCDIR  := src
OBJDIR  := obj

SRC     := $(SRCDIR)/main.cpp \
			$(SRCDIR)/PmergeMe.cpp

OBJ     := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))

CXX     := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -I$(INCDIR)

GREEN   := \033[1;32m
CYAN    := \033[1;36m
RESET   := \033[0m
SMILEY  := 👍
BROOM   := 🧹
SOAP    := 🧼

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)✔ Build successful ! $(SMILEY)$(RESET)"

clean:
	@rm -rf $(OBJDIR)
	@echo "$(CYAN)$(BROOM) Object files cleaned.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(CYAN)$(SOAP) Full cleanup done.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
