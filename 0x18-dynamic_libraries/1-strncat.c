#include "main.h"
/**
 * _strncat - concatenates value of two strings,
 * @dest: destination of string.
 * @src: source of string.
 * @n: amount of bytes used from src.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int m;

	l = 0;
	while (dest[l] != '\0')
	{
		m++;
	}

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';

	return (dest);
}

