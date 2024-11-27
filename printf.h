/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:28:20 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/11/27 16:45:37 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	print_char(char c);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	print_pointer(unsigned long int pp);
int	print_dec(int n);
int	hexa_l(long int pp, int c);
int	hexa(long int pp, int c);
int	check_flag(char c, va_list ap);
#endif
