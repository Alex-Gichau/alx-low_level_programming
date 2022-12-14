#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character C to stdout
 * the character to print
 * Return the success 1
 * Do error, -1 is retuned, and error is set approximately.
 */
int _putchar(char c)
{
	return (write(l, &c, 1));
}
