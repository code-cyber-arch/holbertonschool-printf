#include "main.h"

/**
 * int_to_ascii - Converts an integer to an ASCII string in
 * a given base.
 * @num: The integer to convert.
 * @base: The base for conversion, where 2 <= base <= 16.
 * Return: Pointer to the ASCII string representation of num.
 */

char *int_to_ascii(long int num, int base)
{
	static char buffer[50];
	char *ptr = buffer + 49;
	static char *array = "0123456789abcdef";
	unsigned long n = num < 0 ? -num : num;

	*ptr = '\0';
	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n);
	if (num < 0 && base == 10)
		*--ptr = '-';
	return (ptr);
}

/**
 * int_print - Prints an integer.
 * @list: A va_list argument pointer.
 * Return: The number of characters printed.
 */

int int_print(va_list list)
{
	return (print(int_to_ascii(va_arg(list, int), 10)));
}

