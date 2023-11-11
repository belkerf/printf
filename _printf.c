#include "main.h"
/**
 * _printf - the copy made function of printf
 * @format : the format we give to printf
 * Return: it return the number of characters that are printed.
 */
int _printf(const char *format, ...)
{
	/*num : the number of char will be printed and returned*/
	int num = 0, str_count = 0;
	va_list list_arg;

	/*check if the format is null or the format is % followed by nothing*/
	if (!format || (format[0] == '%' && format[1] == ' '))
	{
		return (-1);
	}
	va_start(list_arg, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			num++;
		}
		else if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char c = va_arg(list_arg, int);

				write(1, &c, 1);
				num++;
			}
			if (*format == 's')
			{
				str_count = print_str(va_arg(list_arg, char *));
				num += str_count;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				num++;
			}
			if (*format == 'd'|| *format == 'i')
			{
				int *i = va_arg(list_arg, int *);
				write(1, i, 100);
				num += 4;
			}
		}
		format++;
	}
	va_end(list_arg);
	/*return the number of char that we print*/
	return (num);
}
