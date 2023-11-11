#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
#endif
