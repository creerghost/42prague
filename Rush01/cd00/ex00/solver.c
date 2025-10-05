int	check_row(int grid[4][4], int row, int col, int num)
{
	int	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	count_visible(int *line)
{
	int	max = 0;
	int	count = 0;
	int	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_views(int grid[4][4], int *hints)
{
	int	row[4];
	int	col[4];
	int	i, j, visible;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			col[j] = grid[j][i];
			row[j] = grid[i][j];
			j++;
		}
		// top hints
		visible = count_visible(col);
		if (hints[i] && visible != hints[i])
			return (0);
		// bottom hints
		int rev_col[4] = {col[3], col[2], col[1], col[0]};
		visible = count_visible(rev_col);
		if (hints[4 + i] && visible != hints[4 + i])
			return (0);
		// left hints
		visible = count_visible(row);
		if (hints[8 + i] && visible != hints[8 + i])
			return (0);
		// right hints
		int rev_row[4] = {row[3], row[2], row[1], row[0]};
		visible = count_visible(rev_row);
		if (hints[12 + i] && visible != hints[12 + i])
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[4][4], int hints[16], int pos)
{
	int	row = pos / 4;
	int	col = pos % 4;
	int	num;

	if (pos == 16)
		return (check_views(grid, hints));
	num = 1;
	while (num <= 4)
	{
		if (check_row(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, hints, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

