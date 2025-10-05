#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	*parse_input(char *str)
{
	int	*arr = (int *)malloc(16 * sizeof(int));
	int	i = 0;

	if (!arr)
		return (0);
	while (*str && i < 16)
	{
		if (*str >= '1' && *str <= '4')
		{
			arr[i] = *str - '0';
			i++;
		}
		str++;
	}
	if (i != 16)
	{
		free(arr);
		return (0);
	}
	return (arr);
}

void	print_grid(int grid[4][4])
{
	int	i = 0;
	int	j;
	char	c;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			ft_putchar(c);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
