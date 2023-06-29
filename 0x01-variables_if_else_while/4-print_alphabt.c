#include <stdio.h>
/**
 * Main - Entry point
 * Description "print alphabets expect q and e"
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 227)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
