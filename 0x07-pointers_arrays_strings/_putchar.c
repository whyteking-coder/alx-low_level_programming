#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 *
 * Return (0) success 1.
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char C)
{
	return (write(1, &c, 1));
}
