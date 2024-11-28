/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:11:48 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/28 14:54:44 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>

int main()
{
    int i, j = 0;
    //ft_printf("retunr %d\n",ft_printf("%d\n", -10000));
    //printf("%ld\n", ULONG_MAX);
    fclose(stdout);
    i = ft_printf("\001\002\007\v\010\f\r\n");
    j = printf("\001\002\007\v\010\f\r\n");
    fopen(stdout, O_RDWR);
    printf("%i %i\n", i, j);
    return (0);
}