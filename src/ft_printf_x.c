/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:09:14 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/05 14:32:41 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned long n)
{
	unsigned long	temp;

	temp = 0;
	while (n != 0)
	{
		if (n > 15)
		{
			temp = n % 16;
		}
		if (d)
	}
}
