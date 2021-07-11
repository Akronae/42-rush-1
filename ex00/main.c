#include "io_utils.h"
#include "string_utils.h"
#include "math_utils.h"
#include "array_utils.h"
#include "int_utils.h"
#include "constants.h"
#include "grid.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	**arr;

	if (argc != 2)
	{
		putstr("Error");
		return (1);
	}
	arr = create_grid(argv[1]);
	putarray_2_int(arr);
	return (0);
}
