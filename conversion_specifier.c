#include "main.h"

/**
 * printf_integer - function that prints int
 * @ahm: args
 * Return: numb of chars
 */
int printf_integer(va_list ahm)
{
	int m = va_arg(ahm, int);
	int number, la = m % 10, dig, e = 1;
	int x = 1;

	m = m / 10;
	number = m;

	if (la < 0)
	{
		_putchar('_');
		number = -number;
		m = -number;
		la = -la;
		x++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			e = e * 10;
			number = number / 10;
		}
		number = m;
		while (e > 0)
		{
			dig = number / number;
			_putchar(dig + '0');
			number = number - (dig * e);
			e = e / 10;
			x++;
		}
	}
	_putchar(la + '0');

	return (x);
}
