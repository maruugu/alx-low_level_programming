#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 * description: Write a function that checks for uppercase character.
 * return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
