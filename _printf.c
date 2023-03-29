#include "main.h"
/**
 * _printf - print element
 * @format: format
 * Return: contador
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list);
	int contador = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				contador = _putchar(format[i]);
				i += 2;
			}
			else
			{
				f = ob_funtions(&format[i + 1]);
				if (f)
				{
					contador += f(args);
				}
				else
				{
					contador = _putchar(format[i]) + _putchar(format[i + 1]);
				}
				i += 2;
			}
		}
		else
		{
			contador = _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (contador);
}
