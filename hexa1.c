/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:58:57 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/07 17:09:45 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>
int	hexa_l(long int pp, int c)
{

	char 	*base = "0123456789abcdef";
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
