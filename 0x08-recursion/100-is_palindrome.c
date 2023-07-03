#include <string.h>
#include "main.h"

/**
 * engine - Sequentially checks characters in string
 * @s: Given string
 * @first: Beginning character
 * @last: Ending character
 *
 * Return: int
*/

int engine(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	if (s[first] != s[last])
		return (0);
	return (engine(s, first + 1, last - 1));
}

/**
 * is_palindrome - Returns 1 if string is a palindrome. 0 if not
 * @s: Given string
 *
 * Return: int
*/
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (engine(s, 0, length - 1));
}

