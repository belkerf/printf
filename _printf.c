#include "main.h"
/**
 * _printf - the copy made function of printf
 * @format : the format we give to printf
 * Return: it return the number of characters that are printed.
 */
int _printf(const char *format, ...)
{
	/*num : the number of char will be printed and returned*/
	int num = 0;
	va_list ap;
	char *p;

	va_start(ap, format);
	/*check if the format is null or the format is % followed by nothing*/
	if (!format || (format[0] == '%' && format[1] == ' '))
	{
		return (-1);
	}
	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			num += _putchar(*p);
		}
	}
	va_end;
	/*return the number of char that we print*/
	return (num);
}
