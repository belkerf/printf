/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:21:19 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 16:44:37 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_dec(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += print_char('-');
		print_dec(n * (-1));
	}
	else if (n <= 9)
		count += print_char(n + '0');
	else
	{
		print_dec(n / 10);
		print_dec(n % 10);
	}
	return (count);
}
