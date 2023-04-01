#include "main.h"
/**
  * ob_funtions - obtenemos la funcion deseada
  * @s: caracter de la funcion
  * Return: funcion
  */
int (*ob_funtions(const char *s))(va_list)
{
	int i = 0;
	verifica a[] = {
		{"c", fun_c},
		{"s", fun_s},
		{"d", fun_d},
		{"i", fun_d},
		{NULL, NULL}
	};
	while (a[i].letra)
	{
		if (*s == *(a[i].letra))
		{
			return (a[i].f);
		}
		i++;
	}
	return (NULL);

}
