#include "main.h"
/**
 *_strlen -finding length of a string.
 *@s:String pointer
 *Return: returns length.
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

