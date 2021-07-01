#include "holberton.h"
/**
 *_strcat - - funciton that concatenates two strings
 * @dest:  destinaiton
 * @src: source
 * Return: string
 */
char *_strcat(char *dest. char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
