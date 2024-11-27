/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:17:32 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 23:49:33 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_flag(char c, va_list ap)
{
	int	counter;

	counter = 1;
	if (c == 'c')
		counter = print_char(va_arg(ap, int));
	else if (c == 's')
		counter = ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		counter = print_pointer(va_arg(ap, unsigned  long int));
	else if (c == 'i' || c == 'd')
		counter = print_dec(va_arg(ap, int), 0);
	else if (c == 'u')
		counter = print_unsigned(va_arg(ap, int), 0);
	else if (c == 'x')
		counter = hexa_l(va_arg(ap, unsigned int), 0);
	else if (c == 'X')
		counter = hexa_u(va_arg(ap, unsigned int), 0);
	else if (c == '%')
		write(1, "%", 1);
	else
		write(1, &c, 1);
	return (counter);
}
