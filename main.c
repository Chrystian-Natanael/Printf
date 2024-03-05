# include "./include/ft_printf.h"
# include <stdio.h>
# include <limits.h>

int	main(void)
{
	int	count;
	char *str = "Hello World!";

	printf("|% 100s|", str);

	// count = ft_printf("|% 10s|\n", str);
	// ft_printf("count: %d\n", count);
	// count = printf("|% 10s|\n", str);
	// ft_printf("count: %d\n", count);
	return (0);
}