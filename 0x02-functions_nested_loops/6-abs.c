#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n : what is the value
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

