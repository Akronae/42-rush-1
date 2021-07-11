//
// Created by alexr on 7/11/2021.
//

#include <stdlib.h>
#include "array_utils.h"

void	*new_array(int element_size, int element_count)
{
	void	**addr;
	int i;

	addr = malloc(element_size * element_count + sizeof(NULL));
	i = -1;
	while (++i <= element_count + 1)
	{
		addr[i] = NULL;
	}
	return (addr);
}

void	*new_array_int(int element_count)
{
	return (new_array(sizeof(int), element_count));
}