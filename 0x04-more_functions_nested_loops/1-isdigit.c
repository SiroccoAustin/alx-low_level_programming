# include "main.h"

/** 
 * _isdigit - function that return numbers from 0 to a 9 number
 * @c: digit will be checked
 * Return: return  1 if is digit and 0 if not a digit
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
