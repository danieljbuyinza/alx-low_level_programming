#include <ctype.h>
#include "main.h"

/**
 * islower - Checks for lowercase character
*/
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
