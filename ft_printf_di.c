/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:11:04 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/20 17:36:31 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_printf_di(int nbr)
{
	char	*res;
	int		cnt;

	res = ft_itoa(nbr);
	cnt = ft_printf_s(res);
	return (cnt);
}
