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
	if (s != NULL)
	{
		while (s[i])
            {
                putchar(s[i]);
                i++;
            }
        return (i);
        }
        else
        {
            s = "(null)";
             while (s[i])
            {
                putchar(s[i]);
                i++;
            }
            return (i);
        }
}
/**
* fun_d - funcion integer
* @args: lista
* Return: size
*/
int fun_d(va_list args)
{
	int a = va_arg(args, int);

	if (!a)
	{
		if (a < 0)
		{
			putchar('-');
			a *= -1;
		}
	 	return (fun_u(a));
	}
	return(0);
}
