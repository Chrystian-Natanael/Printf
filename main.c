# include "./include/ft_printf.h"
# include <stdio.h>
# include <limits.h>

int	main(void)
{
	int	count;

	count = ft_printf("|% 10s|\n", "");
	ft_printf("count: %d\n", count);
	count = printf("|% 10s|\n", "");
	ft_printf("count: %d\n", count);
	return (0);
}