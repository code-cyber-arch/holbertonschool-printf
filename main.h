#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _strlen(const char *);
int print(char *);
char *int_to_ascii(long int num, int base);

int _printf(const char *, ...);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

int str_print(va_list);
int char_print(va_list);
int int_print(va_list);
int binary_print(va_list);
int unsigned_print(va_list);
int octal_print(va_list);
int hex_low_print(va_list);
int hex_upp_print(va_list);

int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
