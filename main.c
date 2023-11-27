#include "include/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	total = 0;
	long int ptrlm = LONG_MIN;
	long int *iss = &ptrlm;

	long int ptrlmm = LONG_MAX;
	long int *isss = &ptrlmm;

	total = ft_printf("%p\n", iss);
	ft_printf("%d\n", total);
	total = printf("%p\n", iss);
	printf("%d\n", total);
	
	printf("\n\n");
	
	total = ft_printf("%p\n", isss);
	ft_printf("%d\n", total);
	total = printf("%p\n", isss);
	printf("%d\n", total);
	return (0);
}