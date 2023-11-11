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
	/*check if the format is null or the format is % followed by nothing*/
	if (!format || (format[0] == '%' && format[1] == ' '))
	{
		return (-1);
	}
	for (num = 0; *format;num++)
	{
		_putchar(format[num]);
	}

	/*return the number of char that we print*/
	return (num);
}
