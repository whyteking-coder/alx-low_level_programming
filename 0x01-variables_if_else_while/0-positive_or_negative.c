#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Discription "check for a number if it positive or negative"
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("int is positive \n");
	}
	else if (n == 0)
	{
		printf("int is zero \n");
	}
	else
	{
		printf("int is negative \n");
	}
	return (0);
}
