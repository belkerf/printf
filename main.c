#include "ft_printf.h"

int main()
{
	int a = 0;
	int *p = &a;

	ft_printf("%p\n", p);
	printf("%p\n", p);
}
