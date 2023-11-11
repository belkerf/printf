#include "main.h"
/**
 * print_str - function that print the string
 * @str : the string
 * Return: the number of bytes printed
 */
int print_str(char *str)
{
	int i = strlen(str);

	write(1, str, i);
	return (i);
}
