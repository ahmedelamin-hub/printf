#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf -  printf function
 * @format: Format string containing conversion specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list ahm;
	int count = 0;
	const char *current_char;

	va_start(ahm, format);

	for (current_char = format; *current_char != '\0'; ++current_char)
	{
		if (*current_char == '%' && *(current_char + 1) != '\0')
		{
			++current_char;

			switch (*current_char)
			{
			case 'c':
			{
				char c = (char)va_arg(ahm, int);
				count += write(1, &c, 1);
			}
			break;

			case 's':
			{
				const char *str = va_arg(ahm, const char *);
				while (*str != '\0')
				{
					count += write(1, str, 1);
					++str;
				}
			}
			break;

			case 'd':
			case 'i':
			{
				int num = va_arg(ahm, int);
				char buffer[12];
				int len = snprintf(buffer, sizeof(buffer), "%d", num);
				count += write(1, buffer, len);
			}
			break;

			case '%':
				count += write(1, "%", 1);
				break;

			default:
				break;
			}
		}
		else
		{
			count += write(1, current_char, 1);
		}
	}

	va_end(ahm);

	return (count);
}

