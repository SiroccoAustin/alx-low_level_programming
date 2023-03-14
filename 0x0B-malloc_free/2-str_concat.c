#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *concat;

	concat = (char *)malloc(sizeof(char));

	if (concat != NULL)
	{
	concat = strcat(s1, s2);
	}
	else
	{
	return (NULL);
	}
	return (concat);
	

}
