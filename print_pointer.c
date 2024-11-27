/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 23:49:24 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_ll(unsigned long pp, int c)
{
	char	*base;
	
	base = "0123456789abcdef";
	if (pp <= 15)
	{
		write(1, &base[pp], 1);
		c++;
	}
	else
	{
		c += hexa_ll(pp / 16, c);
		write(1, &base[pp % 16], 1);
		c++;
	}
	return (c);
}

int	print_pointer(unsigned long int pp)
{
	write(1, "0x", 2);
	return (hexa_ll(pp, 0) + 2);
}
