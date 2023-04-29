#include <stdio.h>
/**
 * BeforeMain - execute func
 */
void BeforeMain(void) __attribute__ ((constructor));

void BeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
