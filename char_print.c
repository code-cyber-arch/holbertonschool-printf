#include "main.h"

/**
 * char_print - Prints a character.
 * @list: A va_list pointing to the character to print.
 * Return: The number of characters printed.
 */

int char_print(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
