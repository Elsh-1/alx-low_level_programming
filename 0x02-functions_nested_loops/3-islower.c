#include "holberton.h"

/**
 * Description: function that checks for lowercase character
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
