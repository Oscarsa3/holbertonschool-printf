#include "main.h"
/**
* fun_c - funcion carcter
* @args: lista
* Return: 1
*/
int fun_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
 * fun_s - funcion string
 * @args: lista
 * Return: size
 */
int fun_s(va_list args)
{
	int i = 0;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		 s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
