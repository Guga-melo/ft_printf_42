/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:35:32 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/04 14:25:55 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	myprint(const char *str,unsigned int i,  va_list ap)	
{
	if (str[i] == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	/*else if (str == "s")
	{
		va_org(ap, *char);
		va_putstr_fd(ap, 1);
	}
	else if (str == "p")
	{
	}
	else if (str == "d")
	{
	}
	else if (str == "i")
	{
	}
	else if (str == "u")
	{
	}
	else if (str == "x")
	{
	}
	else if (str == "X")
	{
	}
	else if (str == "%")
	{
	}
	*/
}
int	ft_printf(const char *str, ...)
{
	unsigned int	i;
	unsigned int	som;
	va_list			ap;
	va_start(ap, str);

	i = 0;
	som = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			som = som + myprint(&str, i, ap);
		}
		write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (som);
}
int	main()
{
	char g[5] = "tuca";
	ft_printf(" guga %c buga", g);
	return (0);
}

