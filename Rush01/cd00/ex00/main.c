#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
int	solve(int grid[4][4], int hints[16], int pos);
void	print_grid(int grid[4][4]);
int	*parse_input(char *str);

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	*hints;
	int	i;
	int	j;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	hints = parse_input(argv[1]);
	if (!hints)
	{
		ft_putstr("Error\n");
		return (1);
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			grid[i][j++] = 0;
		i++;
	}
	if (solve(grid, hints, 0))
		print_grid(grid);
	else
		ft_putstr("No solution\n");
	free(hints);
	return (0);
}
