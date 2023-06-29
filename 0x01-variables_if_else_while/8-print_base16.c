#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry point
 * Description: 'print all numbers from base 16'
 *
 * Return: Always 0 (success)
 */

int Main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar (low);
	return (0);
}

