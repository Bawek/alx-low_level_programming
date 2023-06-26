#include "main.h"

/**
 * _puts -prints a string followed  \n.
 * @str: input string of pointer.
 * Return: no .
 */
void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[c]);
		c++;
	}
}

