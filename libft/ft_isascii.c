/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:02:06 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/20 22:32:09 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isascii(int i)
{
	if (0 <= i && i <= 127)
		return (1);
	return (0);
}

/*checks for ascii*/

/*
int	main(void)
{
	ft_isascii('R'); //write(1,&i,1) under return(1)
	ft_isascii('€');
}
*/
