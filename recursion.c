#include "main.h"

/**
 * fun_u - cambia a caracter 
 * @i: The character to print
 * Return: On success 0.
 */
int fun_u(unsigned int i)
{
	int a = 0;
	if (i / 10)
	{
		fun_u(i / 10);
	}
	putchar((i % 10) + '0');
	a++;
	return(a);
}
