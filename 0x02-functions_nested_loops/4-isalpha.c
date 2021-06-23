#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c : the character in question
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

