/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/09/09 15:57:30 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	argN;
	va_list	ap;

	i = 0;
	argN = 1;
	while (str[i])
	{
		if (str[i] == '%')
			argN++;
		i++;
	}
	va_start(ap, argN);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				print_char(va_arg(ap, int));
			if (str[i] == 's')
				ft_putstr(va_arg(ap, char *));
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
