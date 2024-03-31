#include "main.h"

/**
 * unsigned_print - Prints an unsigned int in decimal format.
 * @list: Variable argument list with an unsigned int.
 *
 * Return: Number of chars printed.
 */

int unsigned_print(va_list list)
{
	return (print(int_to_ascii(va_arg(list, unsigned int),
				    10) ?: "NULL"));
}

/**
 * octal_print - Prints an unsigned int in octal format.
 * @list: Variable argument list with an unsigned int.
 *
 * Return: Number of characters printed.
 */

int octal_print(va_list list)
{
	char *buff_p;

	buff_p = int_to_ascii(va_arg(list, unsigned int), 8);
	return (print(buff_p != NULL ? buff_p : "NULL"));
}

/**
 * hex_low_print - Prints an unsigned int in lowercase
 * hexadecimal format.
 * @list: Variable argument list with an unsigned int.
 *
 * Return: Number of characters printed.
 */

int hex_low_print(va_list list)
{
	char *buff_p;

	buff_p = int_to_ascii(va_arg(list, unsigned int), 16);
	return (print(buff_p ? buff_p : "NULL"));
}

/**
 * hex_upp_print - Prints an unsigned int in uppercase hexadecimal format.
 * @list: Variable argument list with an unsigned int.
 *
 * Return: Number of characters printed.
 */

int hex_upp_print(va_list list)
{
	char *buff_p;
	int size = 0;

	buff_p = int_to_ascii(va_arg(list, unsigned int), 16);
	if (buff_p != NULL)
	{
		int i;

		for (i = 0; buff_p[i] != '\0'; i++)
		{
			if (buff_p[i] >= 'a' && buff_p[i] <= 'z')
			{
				buff_p[i] = buff_p[i] - 32;
			}
		}
		size = print(buff_p);
	}
	else
	{
		size = print("NULL");
	}
	return (size);
}
