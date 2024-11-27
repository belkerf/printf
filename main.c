/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:11:48 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 22:50:20 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    int i, j = 0;
    //ft_printf("retunr %d\n",ft_printf("%d\n", -10000));
    printf("%ld\n", ULONG_MAX);
    i = printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, 
ULONG_MAX, 0, -42);
    j = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, 
ULONG_MAX, 0, -42);

    printf("%i %i\n", i, j);
    return (0);
}