#include <stdio.h>
/**
 * main - Entry point
 * Description "print alphabet in lowercase and uppercase"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int c = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
