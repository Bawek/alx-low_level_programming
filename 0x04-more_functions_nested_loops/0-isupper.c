#include "main.h"

/**
 * _is checks if parameter is an uppercase character.
 * @ input character.
 * Return: 1 e character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


