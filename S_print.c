#include "main.h"

/**
 * S_print - Handles the custom printf specifier 'S'.
 * @list: A va_list containing the string argument.
 *
 * Return: Number of characters printed.
 */

int S_print(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;

	if (str != NULL)
	{
		for (; *str != '\0'; str++)
		{
			if (*str >= 32 && *str < 127)
				count += char_print(*str);
			else
			{
				count += str_print("\\x");
				count += hex_low_print(*str);
			}
		}
	}
	else
		count += print_str("(null)");
	return (count);
}
