# include <stdio.h>

# include "main.h"

# include <ctype.h>

/**
 * _isupper - check if character is uppercase
 *
 * Return: one if uppper case and zero if not uppercase
 */
int _isuppper(int c)
{
	if((c >= 'A') && (c <= 'Z'))
		return (1);
	
	else
		return (0);
	
}
