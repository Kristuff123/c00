#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		++c;
	}
}

int	main()
{	ft_print_alphabet();
	write(1, "\n", 1);
       return 0;
}       

