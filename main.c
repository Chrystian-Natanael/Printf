#include "include/ft_printf.h"
#include <stdio.h>

int main(void)
{
	int	total = 0;
	char *null_str = NULL;

	total = ft_printf("%s\n", null_str);
	ft_printf("%d\n", total);
	total = printf("%s\n", null_str);
	printf("%d\n", total);
	return (0);
}