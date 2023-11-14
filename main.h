#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;



int _printf(const char *format, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
int printf_char(va_list ahm);
int printf_string(va_list ahm);
int _strlen(char *str);
int _strlencon(const char *str);
int print_11(void);
int printf_integer(va_list ahm);

#endif
