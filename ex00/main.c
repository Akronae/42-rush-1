#include "io_utils.h"
#include "string_utils.h"
#include "math_utils.h"
#include "array_utils.h"
#include "constants.h"
#include <stdlib.h>

int is_configuration_valid(int **boxes, int *constraints);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		putstr("Error");
		return 1;
	}

	char **s = str_split(argv[1], " ");

	int **ss = new_array_2(sizeof(int), get_array_size(s) / 4, get_array_size(s) / 4);
	ss[1][3] = 43;
	nl();
	putnbr(ss[1][3]);

	return (0);
}
