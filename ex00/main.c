#include "io_utils.h"
#include "string_utils.h"
#include "math_utils.h"
#include "constants.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		putstr("Error");
		return 1;
	}

	char **s = str_split(argv[1], " ");
	nl();
	putarraystr(s);
	nl();
	return (0);
}
