#include "main.h"

/**
 * printf_string - a function that prints string
 * @ahm: the arg
 * Return: string length
 */

int printf_string(va_list ahm)
{
	char *str;
	int x;
	int l;

	str = va_arg(ahm, char *);
	if (str == NULL)
	{
		str = "(null)";
		l = _strlen(str);
		for (x = 0; x < l; x++)
			_putchar(str[x]);
		return (l);
	}
	else
	{
		l = _strlen(str);
		for (x = 0; x < l; x++)
			_putchar(str[x]);
		return (l);
	}
}
