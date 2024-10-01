#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int    print_char(char c);
int     ft_printf(const char *str, ...);
int    ft_putstr(char *str);
int    print_pointer(long int pp);
int    print_dec(int n);
int    hexa(long int pp);
int    Hexa(long int pp);
#endif
