#include "main.h"
/**
 * _puts - Prints a string, fowed by a new line, to stdout
 * @str: The string print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
