#include "main.h"

/**
 * binary_print - Prints binary representation of an
 * unsigned int from a va_list.
 * @list: Variable arguments list with an unsigned int.
 * Return: Number of characters printed.
 */

int binary_print(va_list list)
{
	return (print(int_to_ascii(va_arg(list, unsigned int), 2)));
}
