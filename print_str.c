#include "main.h"
int print_str(char *str)
{
	int str_count = 0;

	if (str[str_count] != '\0')
	{
		str_count++;
	}
	write(1, str, str_count);
	return (str_count);
}
