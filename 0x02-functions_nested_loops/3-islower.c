#include "holberton.h"

/**
 * int_ islower : function that checks for lowercase character
 * Returns 1 if c is lowercase
 * returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	return 0;
}
