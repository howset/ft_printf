/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:06:24 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/20 22:33:45 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/
/*
#include <stdio.h>

void 	CharInd(unsigned int index, char *c) {
    printf("Index: %u, Character: %c\n", index, *c);
}

int	main(void)
{
	
	//ft_striteri("successiveapplicationsoff", CharInd);
	//ft_striteri("", CharInd);
	//ft_striteri("4bcd0 ", CharInd);
	
	return 0;
}
*/
