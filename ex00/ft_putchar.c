#include <unistd.h>
#include <stdio.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}
int	main()
{	
	ft_putchar('c');
	ft_putchar('\n');
	return 0;
}
