# README: Custom _printf

## A Prototype Exploration

This repository is hosting the prototype of our custom _printf implementation. This project ambitiously recreates the functionality of the standard printf function, leveraging the power and flexibility of variadic functions. At its core, our _printf function takes a format string (const char *format) alongside a variably-sized list of arguments, mirroring the intriguing capabilities of variadic functions. It meticulously parses the format string, identifies specified patterns, and delegates the task of rendering these patterns to specialized functions designed for outputting the corresponding formatted data. Join us in exploring the intricacies of this implementation and how it brings the familiar printf functionality to life in a new light.

### Formatting Sequence

| Specifiers | Description | Function Name |
| ------ | ------ | ------ |
| s | print a string | str_print |
| c | print just a char | char_print |
| i | print a number in base 10 | int_print |
| d | print a number in base 10 | int_print |
| b | print binary | binary_print |
| x | print a number in base 16 - lowercase | hex_low_print |
| X | print a number in base 16 - uppercase | hex_upp_print |
| o | print a number in base 8 | octal_print |
| u | print unsigned int | unsigned_print |

## Flowchart and Diagram

In this program, the Main Function serves as the entry point, initiating the process by sending an entry to the Handler Function. It then calls this Handler Function, which evaluates its capability to manage the given task. Upon making a decision, the Handler announces its determination and takes steps to enhance the current situation, ultimately returning a size value. This size is critical for the Percent Handler Function, which bases its decision on the value returned by the Handler. This streamlined flow ensures each component plays a pivotal role in the program's overall functionality, with decisions and improvements made at each step to achieve the desired outcome. The flowchart depicts the structure and process flow of three programming functions:
 - Main Function:
   - Sends an entry.
   - Calls the Handler Function.
   - Returns lenght
 - Handler Function:
    - Makes a decision based on whether it can handle something.
    - Announces the decision.
    - Improves the situation.
    - Returns a size.
 - Percent Handler Function:
    - Makes a decision based on the size returned by the Handler.
![Blank diagram - Page 1 (1).png](https://www.dropbox.com/scl/fi/l3ynzalykzxcd2l9p2pj6/Blank-diagram-Page-1-1.png?rlkey=6urw1obhkp3zuo23edideimq9&dl=0&raw=1)

## Usage with Example

```sh
#include "main.h" //include custom _printf function

/**
 * main - Entry point
 * Description: Print various types using custom _printf function.
 * Return: Always 0
 */

int main() {
    _printf("String: %s\n", "Hello, world!");
    _printf("Character: %c\n", 'A');
    _printf("Integer: %i\n", 123);
    _printf("Decimal: %d\n", 12345);
    _printf("Binary: %b\n", 5); // Expected output: 101
    _printf("Hexadecimal (lowercase): %x\n", 255); // Expected output: ff
    _printf("Hexadecimal (uppercase): %X\n", 255); // Expected output: FF
    _printf("Octal: %o\n", 123); // Expected output: 173
    _printf("Unsigned: %u\n", 12345);
    return 0;
}
```

## Compilation with GCC

Our project utilizes the GNU Compiler Collection (GCC) for compiling the source code, ensuring portability and adherence to coding standards. The compilation command we use is as follows:
```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
Here's a breakdown of the options used in this command, helping you understand why each is essential for our development process:
- Wall: Enables all the compiler's warning messages. This option helps in identifying common coding mistakes and potentially problematic constructs.
- Wextra: Turns on additional warning flags that -Wall does not cover. It helps in catching even more unusual code behaviors that could lead to bugs.
- Werror: Treats all warnings as errors, forcing developers to resolve all warnings ensuring cleaner code. This option guarantees that the compiled code meets high-quality standards before it can be executed.
- pedantic: Enforces strict ISO compliance, rejecting any code that utilizes non-standard extensions. This helps in maintaining portability across different platforms.
- std=gnu89: Specifies the version of the C standard to use, in this case, the GNU dialect of ISO C90 (also known as C89). This standard is chosen for compatibility with certain legacy systems or specific project requirements.
- Wno-format: Suppresses warnings about format non-literals. This option is useful for code that intentionally uses format strings in a non-standard way, which is acknowledged and handled by the developers.
Compiling with these options ensures that our code is robust, portable, and free of common errors, leading to a smoother development process and a more reliable end product. It's a reflection of our commitment to quality and standards in coding.


## Contributors

@Susmitha and @Abdu
