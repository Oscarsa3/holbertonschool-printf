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
/**
  * fun_d - funcion integer
  * @args: list
  * Return: size
  */
int fun_d(va_list args)
{
	char *texto;
	int a, res;

	a = va_arg(args, int);
	texto = convert(a, 10);
	if (texto)
	{
		for (res = 0; texto[res] != '\0'; res++)
		{
			_putchar(texto[res]);
		}
	}
	else
		texto = "NULL";
	return (res);
}
/**
* convert - funcion integer
* @num: numero a convertir
* @base: base (10)
* Return: size
*/
char *convert(int num, int base)
{
	static char *array = "0123456789";
	static char buffer[11];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);
	if (sign)
		*--ptr = sign;
	return (ptr);
}
