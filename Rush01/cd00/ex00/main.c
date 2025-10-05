#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
int	solve(int grid[4][4], int hints[16], int pos);
void	init_grid(int grid[4][4]);
void	print_grid(int grid[4][4]);
int	*parse_input(char *str);

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	*hints;

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
	init_grid(grid);
	if (solve(grid, hints, 0))
		print_grid(grid);
	else
		ft_putstr("No solution\n");
	free(hints);
	return (0);
}
