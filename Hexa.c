/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/07 17:30:16 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa(long int pp, int c)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (pp >= 0 && pp <= 15)
	{
		write(1, &base[pp], 1);
		c++;
	}
	else
	{
		c += Hexa(pp / 16, c);
		write(1, &base[pp % 16], 1);
		c++;
	}
	return (c);
}
