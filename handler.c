#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to measure.
 * Return: The length of the string.
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}

/**
 * handler - Processes format specifiers in a string.
 * @str: Format string.
 * @list: Arguments list.
 * Return: Number of characters printed.
 */

int handler(const char *str, va_list list)
{
	int size, i, aux;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			aux = percent_handler(str, list, &i);
			if (aux == -1)
				return (-1);
			size += aux;
			continue;
		}
		_putchar(str[i]);
		size = size + 1;
	}
	return (size);
}

/**
 * percent_handler - Handles format specifiers after a '%' character.
 * @str: Format string.
 * @list: List of arguments.
 * @i: Pointer to index in format string.
 * Return: Number of characters printed, -1 for error.
 */

int percent_handler(const char *str, va_list list, int *i)
{
	int size, j, number_formats;

	format formats[] = {
		{'s', str_print}, {'c', char_print}, {'i', int_print},
		{'d', int_print}, {'b', binary_print}, {'u', unsigned_print},
		{'o', octal_print}, {'x', hex_low_print}, {'X', hex_upp_print}
	};
	*i = *i + 1;
	if (str[*i] == '\0')
		return (-1);
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[*i]);
	return (2);
}
