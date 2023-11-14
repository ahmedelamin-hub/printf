#include "main.h"

/**
 * printf_char - a function that prints a charachter
 * @ahm: the argument
 * Return: 1
 */
int printf_char(va_list ahm)
{
	char str;

	str = va_arg(ahm, int);
	_putchar(str);
	return (1);
}
