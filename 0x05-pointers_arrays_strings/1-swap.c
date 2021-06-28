#include "holberton.h"
/**
 * swap_int - function that swaps the values of integer
 * @a: input 1
 * @b: input 2
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
