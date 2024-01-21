/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:06:51 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/20 22:33:05 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* write c to file descriptor*/
/*
int main(void) {
    
	ft_putchar_fd('H', 0); // STDIN
	ft_putchar_fd('H', 1); // STDOUT
	ft_putchar_fd('H', 2); // STDERR

	return 0;
}
*/
