#include "main.h"

/**
 * puts_half - print half of a string from full string.
 * @str: input.
 * Return: no.
 */
void puts_half(char *str)
{
	int c = 0, i;

	while (c >= 0)
	{
		if (str[c] == '\0')
			break;
		c++;
	}
	if (c % 2 == 1)
		i = c / 2;
	else
		i = (c - 1) / 2;

	for (i++; i < c; i++)
	_putchar(str[i]);
_putchar('\n');
}


