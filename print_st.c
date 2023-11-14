#include "main.h"

/**
 * _strlen - a function which returns string length
 * @str: pointer of str
 * Return: x
 */

int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;
	return (x);
}
/**
 * _strlencon - a function for constant char str
 * @str: char p
 * Return: x
 */

int _strlencon(const char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;
	return (x);
}
