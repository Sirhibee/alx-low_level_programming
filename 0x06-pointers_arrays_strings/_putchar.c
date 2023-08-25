#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * om error, -1 is return, and errno is set appropriatelely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
