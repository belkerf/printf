/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 23:00:54 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_u(unsigned long int pp, int c)
{
	char	*base;
	unsigned long int p = 1844674407370955161;

	if (pp == 9223372036854775807 || pp == (p * 10) + 5)
	{
		return (write(1, "FFFFFFFFFFFFF", 8));
	}
	if (pp == (unsigned long)(-9223372036854775807 -1))
		return (write(1, "000000000000000", 1));
	base = "0123456789ABCDEF";
	if (pp <= 15)
	{
		write(1, &base[pp], 1);
		c++;
	}
	else
	{
		c += hexa_u(pp / 16, c);
		write(1, &base[pp % 16], 1);
		c++;
	}
	return (c);
}
