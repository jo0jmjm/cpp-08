#=============================
#flags
#=============================
NAME		= a.out
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -O -std=c++98
RM			= rm -f
DFLAGS		= -MMD -MP
#=============================
#src
#=============================
SRCDIR		= ./srcs
SRCS		= $(shell find $(SRCDIR) -type f -name '*.cpp')
#=============================
#directory
#=============================
INCDIR		= ./include
INCLUDE		= -I$(INCDIR)
OBJDIR		= ./obj
ifeq "$(strip $(OBJDIR))" ""
  OBJDIR	= .
endif
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))
DEPENDS = $(OBJECTS:.o=.d)
#=============================
#rule
#=============================
all: $(NAME) 

$(NAME): $(OBJECTS)
	@echo $(BLUE)"----- $(NAME) $(CXX) start-----"$(RESET)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(DFLAGS) $(INCLUDE) 
	@echo $(GREEN)"----- $(NAME) $(CXX) done-----"$(RESET)
	@echo $(SKYBLUE) "make.o" $(RESET)
#-----
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	 -mkdir -p $(@D) 
	$(CXX) $(CXXFLAGS) $(DFLAGS) $(INCLUDE) -c $< -o $@ 

clean:
	$(RM) $(OBJEDIR) $(DEPENDS)
	@echo $(YELLOW)"----- $(NAME) clean done-----"$(RESET)

fclean:	clean
	$(RM) $(NAME)
	@echo $(RED)"----- $(NAME) fclean done-----"$(RESET)

re: fclean all

-include $(DEPENDS)

.PHONY: all clean fclean re 
#=============================
#make option
#=============================
d: CXXFLAGS +=  -g -fsanitize=address -fsanitize=undefined
d: re

s:
	make re
	./a.out | cat -e

a:
	make 
	./a.out

#=============================
#color
#=============================
RED			=	"\033[31m"
GREEN		=	"\033[32m"
YELLOW		=	"\033[33m"
BLUE		=	"\033[34m"
PURPLE		=	"\033[35m"
SKYBLUE		=	"\033[36m"
RESET		=	"\033[0m"
