/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 08:31:02 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/05 11:17:31 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int main()
{
	char *d;
	int i;

	d = 0;
	i = ft_printf("%s\n", d);
	ft_printf("guga: %i ", i);
	return (0);
}
