#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - calculate value.
 * Return: 0 .
 */
int main(void)
{
	int d = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		d = rand() % 128;
		if ((c + d) > 2772)
			break;
		c = c + d;
		printf("%c", d);
	}
	printf("%c\n", (2772 - c));
	return (0);
}



