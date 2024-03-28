#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string  to by src,
 * @src: input
 * @dest: destination.
 * Return:  dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (c >= 0)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}

