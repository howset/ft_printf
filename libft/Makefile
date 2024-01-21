# https://epitech-2022-technical-documentation.readthedocs.io/en/latest/makefiles.html

# -------------------------------------------------------------------#
# Variables. list the source c files
SRC	=	../libft/ft_isalpha.c \
		../libft/ft_isdigit.c \
		../libft/ft_isalnum.c \
		../libft/ft_isascii.c \
		../libft/ft_isprint.c \
		../libft/ft_strlen.c \
		../libft/ft_memset.c \
		../libft/ft_bzero.c \
		../libft/ft_memcpy.c \
		../libft/ft_memmove.c \
		../libft/ft_strlcpy.c \
		../libft/ft_strlcat.c \
		../libft/ft_toupper.c \
		../libft/ft_tolower.c \
		../libft/ft_strchr.c \
		../libft/ft_strrchr.c \
		../libft/ft_strncmp.c \
		../libft/ft_memchr.c \
		../libft/ft_memcmp.c \
		../libft/ft_strnstr.c \
		../libft/ft_atoi.c \
		../libft/ft_calloc.c \
		../libft/ft_strdup.c \
		../libft/ft_substr.c \
		../libft/ft_strjoin.c \
		../libft/ft_strtrim.c \
		../libft/ft_split.c \
		../libft/ft_itoa.c \
		../libft/ft_strmapi.c \
		../libft/ft_striteri.c \
		../libft/ft_putchar_fd.c \
		../libft/ft_putstr_fd.c \
		../libft/ft_putendl_fd.c \
		../libft/ft_putnbr_fd.c \

# -------------------------------------------------------------------#
# Variables. Objects have same name with .c sources but different extension
OBJ	= $(SRC:.c=.o)

# -------------------------------------------------------------------#
# Variables. set the name of the final binary using NAME, so the 
# AutoGrader can find the binary correctly.
NAME = libft.a

# -------------------------------------------------------------------#
# Variables. -I Include Path - Directories containing headers files. 
CFLAGS = -Wall -Werror -Wextra -I.

# -------------------------------------------------------------------#
# Variables. Define CC 
CC = cc

# -------------------------------------------------------------------#
# rule that will execute other rules, and render a binary.
# -c Compiler source(s) to object-code (input to linker). 
# Better for incremental compilation when using multiple files. ?
# cc -c -o $(NAME) $(OBJ)
# ---------
# https://docs.oracle.com/cd/E19504-01/802-5880/make-19/index.html
# The implicit rules provided by default are suffix rules. 
# The rule for building a .o file from a .c file is called the .c.o 
# (pronounced "dot-see-dot-oh") suffix rule.
# ---------
# https://hackernoon.com/how-to-create-a-library-in-c-with-a-makefile
# the “ar” command creates an archive file, which becomes our static library. 
# The r flag to replace/add files to the archive, c to create if it doesn’t 
# exist, s write an index into the archive for faster searches 
# (if the library contains many object files).

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ):	$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

# ---------
# Alternative. No explicit mention of compiling the sources. Compilation
# proceeds because $(NAME) and ar command requires $(OBJ) which will be 
# compiled automatically
# If using this
#$(NAME):	$(OBJ)
#	ar rcs $(NAME) $(OBJ)

# -------------------------------------------------------------------#
# a conventional name; all target denotes that if invoked, 
# make will build all to make a complete build. 
all:     	$(NAME)

# -------------------------------------------------------------------#
# clean will remove .o files (if called)
clean:
	rm -f $(OBJ)

# -------------------------------------------------------------------#
# fclean will remove .o files and the binary (if called)
fclean: clean
	rm -f $(NAME)

# -------------------------------------------------------------------#
# re will do fclean and re-make the binary (if called)
re:     	fclean all

# -------------------------------------------------------------------#
#.PHONY, in order to avoid relinking. Put all the used rules.
.PHONY: clean fclean all re
