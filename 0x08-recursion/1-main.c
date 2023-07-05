#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * _putchar - function to write character to stdout
 * @s: the string to be printed
 */

int _putchar(char s);

void _print_rev_recursion(char *s)
{
        if (*s)
        {
        _print_rev_recursion(s + 1);
        _putchar(*s);
	}
}
