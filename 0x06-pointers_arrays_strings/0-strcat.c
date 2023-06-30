#include "main.h"
/**
 * _strcat - concatenates two strings value,
 *
 * @dest: destination of destination string.
 * @src: source of string.
 * Return: the pointer .
 *
 */
char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		c1++;
	}

	while (c2 >= 0)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c++;
		c2++;
	}
	return (dest);
}

