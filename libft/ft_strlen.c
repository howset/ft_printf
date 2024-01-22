/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:35:10 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/22 14:08:06 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	counts;

	counts = 0;
	while (str[counts] != '\0')
	{
		counts++;
	}
	return (counts);
}

/*
#include <string.h> //memchr,memcmp,memcpy,memmove,memset
					//strchr,strcpy,strlen
#include "stdio.h"
int	main(void)
{
	//char s[]="help";
	char s[] = {'h','i','t','h','e','r','e'};

	printf("ft_strlen: %lu\n",ft_strlen(s));
	printf("strlen: %lu\n",strlen(s));
}
*/
