#include "holberton.h"
/**
 * _strlen - the lenght of a string
 * @s: pointer to the string
 * Return: void
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char p1 = s[0];

	while (p1 != '\0')
	{
		sum++;
		p1 = s[i++];
	}	
	return (i);
}
