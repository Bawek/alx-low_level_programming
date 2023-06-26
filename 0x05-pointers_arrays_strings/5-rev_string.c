#include "main.h"
/**
 * rev_string - the loop reverses a string order.
 * @s: input.
 * Return: no.
 */
void rev_string(char *s)
{
	int c = 0, i, j;
	char *str, temp;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	str = s;

	for (i = 0; i < (c - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}

