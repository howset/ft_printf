/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:05:48 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/20 22:32:02 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalpha(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
		return (1);
	return (0);
}

/*checks for alphabetic character*/

/*
int	main(void)
{
	ft_isalpha('a'); //write(1,&i,1) under return(1)
	ft_isalpha('1');
}
*/
