# include "main.h"


/* isdigit function that return numbers from 0 to 9
 * return 0 or 1
 */

int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
