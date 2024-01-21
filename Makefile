# -------------------------------------------------------------------#
# Variables.
NAME = libftprintf.a

SRC	=	ft_printf.c \
		ft_printf_c.c \
		ft_printf_s.c \
		ft_printf_di.c \
		ft_printf_u.c \
		ft_printf_p.c \
		ft_printf_hex.c \

OBJ	= $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I./includes/

CC = cc

# -------------------------------------------------------------------#
# Targets.
# make sure to also make the libft 
# https://www.gnu.org/software/make/manual/html_node/Recursion.html
# $(MAKE) Recursive use of make  is useful when you want separate 
# makefiles for various subsystems
# -C to specify dir
$(NAME):	$(OBJ)
	$(MAKE) -C ./libft

# copy libft.a as libftprintf.a into his dir, then make archive by 
# adding the ft_printf to it.
	cp libft/libft.a $(NAME) 
	ar rcs $(NAME) $(OBJ)

$(OBJ):	$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

# -------------------------------------------------------------------#
all:     $(NAME)

# make sure to also clean the libft by calling the clean target of the 
# libft makefile
clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re:     fclean all

# -------------------------------------------------------------------#
#.PHONY
.PHONY: clean fclean all re
