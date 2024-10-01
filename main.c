#include "ft_printf.h"
#include <stdio.h>

int main()
{

	int a = 0;
	int *p = &a;
	printf("%i\n",ft_printf("%p\n", p));
}
