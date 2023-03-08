#include "main.h"

/**
 * is_prime_number - outputs prime number
 * @n: integer argument
 * Return: prime number
 */


int is_prime_number(int n)
{
	if (n == 1)
	{
	return (0);
	}
	if (n % 2 == 1)
	{
	return (1);
	}
	return (0);
}
