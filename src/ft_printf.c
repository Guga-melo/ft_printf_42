/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:35:32 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/05 13:40:35 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	myprint(const char *str, int i,  va_list ap)	
{
	int	size;

	size = 0;
	if (str[i] == 'c')
		size = ft_printf_c(va_arg(ap, int));
	else if (str[i] == 's')
		size = ft_printf_s(va_arg(ap, char*));
	/*
	else if (str == "p")
	{
	}
	*/
	else if (str[i] == 'd')
		size = ft_printf_d(va_arg(ap, int));
	else if (str[i] == 'i')
		size = ft_printf_d(va_arg(ap, int));
	else if (str[i] == 'u')
		size = ft_printf_u(va_arg(ap, unsigned int));
	/*
	else if (str[i] == 'x')
	{
	}
	else if (str[i] == 'X')
	{
	}
	else if (str[i] == '%')
	{
	}
	*/
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		sum;
	va_list	ap;

	i = 0;
	sum = 0;
	va_start(ap, str);
	while (str[i] != 0)
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			sum = sum + myprint(str, i++, ap);
		}
		else
		{
		write(1, &str[i], 1);
		i++;
		sum++;
		}
	}
	va_end(ap);
	return (sum);
}
