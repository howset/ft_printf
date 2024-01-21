/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:22:31 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/20 22:32:25 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isdigit(int i)
{
	if (('0' <= i && i <= '9'))
		return (1);
	return (0);
}

/*checks for adigit*/

/*
int	main(void)
{
	ft_isdigit('a'); //write(1,&i,1) under return(1)
}
*/
