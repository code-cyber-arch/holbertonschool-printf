.\" Manpage for _printf
.TH _printf 3 "March 2024" "Version 1.0" "_printf man page"

.SH NAME
_printf \- format and print data

.SH SYNOPSIS
.B #include <stdio.h>
.br
.B int _printf(const char *format, ...);

.SH DESCRIPTION
The _printf function prints formatted output to stdout according to the format string format.

.SH RETURN VALUE
Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

.SH EXAMPLES
The following code snippet demonstrates the usage of _printf function:

.PP
.B #include <stdio.h>
.br
.B int main() {
.br
.B   _printf("Hello, %s!\n", "world");
.br
.B   return 0;
.br
.B }

.SH SEE ALSO
fprintf(3), sprintf(3), snprintf(3)

.SH BUGS
There are no known bugs in this function.

.SH AUTHOR
Carole <your@email.com>

.SH COPYRIGHT
Copyright © 2024 Carole. This is free software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law.	
