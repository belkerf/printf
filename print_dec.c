/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/09/09 15:57:30 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_dec(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		write(1, "-",1);
		count++;
		print_dec(n * (-1));
	}
	else if (n <= 9)
		count += print_char(n + '0');
	else
	{
		count += print_dec(n / 10);
		count += print_dec(n % 10);
	}
	return (count);
}
