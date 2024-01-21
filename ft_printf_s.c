/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:11:00 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/21 16:43:52 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_printf_s(char *str)
{
	int	cnt;

	if (!str)
		return (write(1, "(null)", 6));
	cnt = 0;
	while (str[cnt] != '\0')
		cnt = cnt + ft_printf_c(str[cnt]);
	return (cnt);
}
