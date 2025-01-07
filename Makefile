# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source and object files
SRC = $(wildcard *.c) # Finds all .c files in the current directory
OBJ = $(SRC:.c=.o)    # Replaces .c with .o for object files

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created. \n"
	@rm -f $(OBJ)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@rm -f $(OBJ)
	@echo "Object files removed."

# Clean object files and the library
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Recompile everything
re: fclean all

# Avoid conflicts with files named like these targets
.PHONY: all clean fclean re
