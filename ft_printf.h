#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

void    print_char(char c);
int     ft_printf(const char *str, ...);
void    ft_putstr(char *str);
#endif