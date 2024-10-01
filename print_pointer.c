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

int	hexa(long int pp, int c)
{

	char 	*base = "0123456789abcdef";
	if (pp >= 0 && pp <= 15)
	{
		write(1, &base[pp], 1);
		c++;
	}
	else
	{
		c += hexa(pp / 16, c);
		write(1, &base[pp % 16], 1);
		c++;
	}
	return (c);
}

int	print_pointer(long int pp)
{
	write(1, "0x", 2);
	return (hexa(pp, 0));
}
