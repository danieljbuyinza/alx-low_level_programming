#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between strings
 * @n: The number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char*));
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
