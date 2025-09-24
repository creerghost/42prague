#include <stdio.h>

void 	ft_ft(int *nbr)
{
	*nbr = 42;
}

int 	main(int a)
{
	a = 5;

	ft_ft(&a);
	write(1,&a,1);

	return 0;
}
