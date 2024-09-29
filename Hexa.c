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

void    Hexa(long int pp)
{
        char    *base = "0123456789ABCDEF";
	if (pp >= 0 && pp <= 15)
        {
                write(1, &base[pp], 1);
        }
        else
        {
                Hexa(pp / 16);
                Hexa(pp % 16);
        }
}
