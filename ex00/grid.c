//
// Created by alexr on 7/11/2021.
//

#include "grid.h"
#include "array_utils.h"
#include "string_utils.h"
#include "int_utils.h"

int	get_cell_value_from_constraints(int x, int y, char **constraints)
{
	int	size;

	size = get_array_size(constraints) / 4 + 2;
	if (y == 0 && x > 0 && x < size - 1)
		return (ft_atoi(constraints[x - 1]));
	else if (y == size - 1 && x > 0 && x < size - 1)
		return (ft_atoi(constraints[1 * (size - 2) + x - 1]));
	else if (x == 0 && y > 0 && y < size - 1)
		return (ft_atoi(constraints[2 * (size - 2) + y - 1]));
	else if (x == size - 1 && y > 0 && y < size - 1)
		return (ft_atoi(constraints[3 * (size - 2) + y - 1]));
	else
		return (0);
}

int	**create_grid(char *constraints)
{
	int		size;
	char	**constraints_split;
	int		**arr;
	int		y;
	int		x;

	constraints_split = str_split(constraints, " ");
	size = get_array_size(constraints_split) / 4 + 2;
	arr = new_array_2(sizeof(int), size, size);
	y = -1;
	while (++y < size)
	{
		x = -1;
		while (++x < size)
		{
			arr[y][x] = get_cell_value_from_constraints(x, y,
					constraints_split);
		}
	}
	return (arr);
}
