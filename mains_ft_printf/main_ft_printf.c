
#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

/*ccexa -n main_ft_printf.c ft_printf.c ft_printf_c.c ft_printf_s.c ft_printf_di.c ft_printf_u.c ft_printf_hex.c ft_printf_p.c ./libft/ft_strdup.c ./libft/ft_putchar_fd.c ./libft/ft_itoa.c ./libft/ft_strlen.c ./libft/ft_strlcpy.c */ 

/*cc -Wall -Werror -Wextra main_ft_printf.c ft_printf.c ft_printf_c.c ft_printf_s.c ft_printf_di.c ft_printf_u.c ft_printf_hex.c ft_printf_p.c ./libft/ft_strdup.c ./libft/ft_putchar_fd.c ./libft/ft_itoa.c ./libft/ft_strlen.c ./libft/ft_strlcpy.c*/

int main(void)
{
    void *mem_add;
	mem_add = malloc(sizeof(char));

    /*ft_printf*/
    /*Print Characters*/
    ft_printf("\nFt_printf characters: %c %c %c %c", 'h', 'm', 's', 'w');
    /*Print String*/
    ft_printf("\nFt_printf string: %s, %s", "Catcat", "Dogdog");
    /*Print Numbers*/
    ft_printf("\nFt_printf numbers: %d, %i", 1234, -567);
    /*Print Unsigned Numbers*/
    ft_printf("\nFt_printf unsigned: %u", UINT_MAX);
    /*Print Hexadecimals lower case*/
    ft_printf("\nFt_printf hexadecimals: %x", 479); //1df
    /*Print Hexadecimals upper case*/
    ft_printf("\nFt_printf HEXADECIMALS: %X", 894); //37E
    /*Print Pointers*/
    ft_printf("\nFt_printf pointer: %p", mem_add);
    /*Print Percent*/
    ft_printf("\nFt_printf percent: %%");

    /*printf*/
    /*Print Characters*/
    printf("\nPrintf characters: %c %c %c %c", 'h', 'm', 's', 'w');
    /*Print String*/
    printf("\nPrintf string: %s, %s", "Catcat", "Dogdog");
    /*Print Numbers*/
    printf("\nPrintf numbers: %d, %i", 1234, -567);
    /*Print Unsigned Numbers*/
    printf("\nPrintf unsigned: %u", UINT_MAX);
    /*Print Hexadecimals lower case*/
    printf("\nPrintf hexadecimals: %x", 479); //1df
    /*Print Hexadecimals upper case*/
    printf("\nPrintf HEXADECIMALS: %X", 894); //37E
    /*Print Pointers*/
    printf("\nPrintf pointer: %p", mem_add);
    /*Print Percent*/
    printf("\nPrintf percent: %%");

    free(mem_add);
}
