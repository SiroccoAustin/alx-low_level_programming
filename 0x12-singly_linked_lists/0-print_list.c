#include "list.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
	printf("[0] (nil)");
	}
	return (h);
}
