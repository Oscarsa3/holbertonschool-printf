#include "main.h"

/**
 * fun_u - cambia a caracter 
 * @i: The character to print
 * Return: On success 0.
 */
int fun_int(unsigned int i)
{
	if (i / 10)
	{
		fun_int(i / 10);
	}
	putchar((i % 10) + '0');
	return (0);
}
