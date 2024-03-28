include "main.h"

/**
 * str_print - Prints a string.
 * @list: A va_list pointing to the string to print.
 * Return: The number of characters printed.
 */
int str_print(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	return (print((str != NULL) ? str : "(null)"));
}
