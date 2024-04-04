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
#include <stdio.h>

int main() {
    // String
    _printf("String: %s\n", "Hello, world!");
    // Character
    _printf("Character: %c\n", 'A');
    // Integer
    _printf("Integer: %i\n", 123);
    // Decimal (Assuming %d is used similarly to %i for integers)
    _printf("Decimal: %d\n", 12345);
    // Binary (Assuming your _printf supports binary format)
    _printf("Binary: %b\n", 5); // Expected output: 101
    // Hexadecimal lowercase
    _printf("Hexadecimal (lowercase): %x\n", 255); // Expected output: ff
    // Hexadecimal uppercase
    _printf("Hexadecimal (uppercase): %X\n", 255); // Expected output: FF
    // Octal
    _printf("Octal: %o\n", 123); // Expected output: 173
    // Unsigned
    _printf("Unsigned: %u\n", 12345);
    return 0;
}
```

## Contributors

@Susmitha and @Abdu
