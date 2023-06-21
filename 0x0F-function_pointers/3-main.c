#include "3-calc.h"
#include <string.h>

int main(int ac, char *av[])
{
	int f, num1, num2;

	if (ac < 4)
	{
		printf("Error\n");
		exit(97);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	f = get_op_func(av[2]);
	printf("%d\n", f(num1, num2));
}
