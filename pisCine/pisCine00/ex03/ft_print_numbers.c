#include <stdio.h>

void ft_print_numbers(void)
{
	int d;
	d = 48;

	while (d<=57)
	{
		write(1,&d,1);
		d++;
	}
}
int main(void)
{
	ft_print_numbers();
	return 0;
}

