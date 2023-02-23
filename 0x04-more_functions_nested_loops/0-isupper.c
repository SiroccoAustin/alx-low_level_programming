# include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	scanf("%c", &c);
	if(c == _isupper(c)){
		return (1);
	}
	else{
		return (0);
	}
	return (0);
}
