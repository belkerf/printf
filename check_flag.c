/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/09/09 15:57:30 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_flag(char c, va_list ap)
{
	int counter;

	counter = 1;
	if (c == 'c')
		counter = print_char(va_arg(ap, int));
	else if (c == 's')
		counter = ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		counter = print_pointer(va_arg(ap, long int));
	else if ( c == 'i' || c == 'd' || c == 'u')
		counter = print_dec(va_arg(ap, int));
	else if (c == 'x')
		counter = hexa_l(va_arg(ap, long int), 0);
	else if (c == 'X')
		counter = Hexa(va_arg(ap, long int), 0);
	else if (c == '%')
		write(1, "%", 1);
	else
		write(1, &c, 1);
	return (counter);
}
