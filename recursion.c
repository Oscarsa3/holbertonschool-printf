#include "main.h"
#include <unistd.h>
/**
 * fun_int - cambia a caracter
 * @i: The character to print
 * Return: On success 0.
 */
int fun_int(unsigned int i)
{
	if (i / 10)
	{
		fun_int(i / 10);
	}
	_putchar((i % 10) + '0');
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
