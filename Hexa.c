/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/09/09 15:57:30 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int    Hexa(long int pp)
{
	int	count;
        char    *base = "0123456789ABCDEF";

	count = 0;
	if (pp >= 0 && pp <= 15)
        {
                write(1, &base[pp], 1);
		count++;
        }
        else
        {
                Hexa(pp / 16);
                Hexa(pp % 16);
        }
	return (count);
}
