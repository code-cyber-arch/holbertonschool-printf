#include "main.h"

/**
 * rev_string_print - Print a string in reverse
 * @list: List of arguments
 *
 * Return: Length of the string
 **/
int  rev_string_print(va_list list)
{
	int i, size;
	const char *str;

	str = va_arg(list, const char *);

	size = _strlen(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}
