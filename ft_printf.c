/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/07 17:18:41 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	count = 0;
	i = 0;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check_flag(str[i], ap);
		}
		else
		{
			count += print_char(str[i]);
		}
		i++;
	}
	return (count);
}
