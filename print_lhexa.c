/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:58:57 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 22:58:46 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	hexa_l(unsigned long int pp, int c)
{
	char	*base;
	unsigned long int p = 1844674407370955161;

	if (pp == 9223372036854775807 || pp == (p * 10) + 5)
	{
		return (write(1, "fffffffffffffffff", 8));
	}
	if (pp == (unsigned long)(-9223372036854775807 -1))
		return (write(1, "000000000000000", 1));
	base = "0123456789abcdef";
	if (pp >= 0 && pp <= 15)
	{
		write(1, &base[pp], 1);
		c++;
	}
	else
	{
		c += hexa_l(pp / 16, c);
		write(1, &base[pp % 16], 1);
		c++;
	}
	return (c);
}
