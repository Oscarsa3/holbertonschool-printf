#ifndef HEADER
#define HEADER
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int (*ob_funtions(const char *s))(va_list);
int fun_c(va_list);
int fun_s(va_list);
int fun_d(va_list);
int fun_int(unsigned int i);
/**
  * struct verificar - tipo de estructura
  * @letra: verificamos el caracter para ver si llamamos su funcion
  * @f: funtion pointer
  */
typedef struct verificar
{
	char *letra;
	int (*f)(va_list);
} verifica;
#endif
