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
	putchar(c);
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
		putchar(s[i]);
		i++;
	}
	return (i);
}
/**
* fun_d - funcion integer
* @args: lista
* Return: 0
*/
int fun_d(va_list args)
{
	int a = va_arg(args, int);

	if (a < 0)
	{
		putchar('-');
		a *= -1;
	}
	return (fun_u(a));
}
