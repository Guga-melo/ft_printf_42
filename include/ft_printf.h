/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:37:01 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/06 13:32:51 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../Libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_printf_c(char c);
int	ft_printf_s(char *s);
int	ft_printf_d(int n);
int	ft_printf_u(unsigned int n);
int	ft_printf_x(unsigned long n);
int	ft_printf_xx(unsigned long n);

#endif
