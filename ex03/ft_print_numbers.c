#include <unistd.h>

void	ft_print_numbers(void)
{
	int n;
	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		++n;
	}
}

int	main()
{
	ft_print_numbers();
	write(1, "\n", 1);
	return 0;
}
