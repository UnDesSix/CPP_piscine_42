_YELLOW		=	\033[38;5;184m
_GREEN		=	\033[38;5;46m
_RESET		=	\033[0m
_INFO		=	[$(_YELLOW)INFO$(_RESET)]
_SUCCESS	=	[$(_GREEN)SUCCESS$(_RESET)]
_CLEAR		=	\033[2K\c

NAME = polymorphism 

SRCS_DIR = ./
SRCS = $(notdir $(shell find $(SRC_DIR) -type f -name "*.cpp"))


FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "\t$(_YELLOW)Compiling$(_RESET) $*.cpp\r\c"
	@clang++ $(FLAGS) -c $< -o $@
	@echo "$(_CLEAR)"

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(_INFO) Initialize $(NAME)"
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)
	@echo "$(_SUCCESS) Compilation done"

clean:
	@echo "$(_INFO) Deleting object files and directories"
	@rm -rf $(OBJS_DIR)
	@echo "$(_SUCCESS) Working directory clean"

fclean: clean
	@echo "$(_INFO) $(NAME) has been deleted."
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
