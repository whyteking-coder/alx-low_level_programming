#include "main.h"
#include <unistd.h>
/**
 * putchar write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * on error, -1 is return, and erro is set approperiately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
