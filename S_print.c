#include "main.h"

/**
 * S_print - Handles the custom printf specifier 'S'.
 * @list: A va_list containing the string argument.
 *
 * Return: Number of characters printed.
 */

int S_print(va_list list)
{
	char *str = va_arg(list, char*);
	int count = 0;
	char spe = "\\x";

	if (str != NULL)
	{
		for (; *str != '\0'; str++)
		{
			if (*str >= 32 && *str < 127)
				count += str_print(*str);
			else
			{
				while (spe != '\0')
				{
					_putchar(spe++);
					count++;
				}
				count += hex_low_print(*str);
			}
		}
	}
	else
		count += print_str("(null)");
	return (count);
}
