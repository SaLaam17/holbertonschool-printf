# _printf: Custom printf function

## Description :
This project implements a simplified version of the standard printf function. The _printf function processes a format string and additional arguments to produce formatted output to standard output (stdout). It supports a limited set of format specifiers and demonstrates the use of function pointers, variadic arguments, and modular code design.

## Conversion specifiers supported:
%c : Prints a single character.
%s : Prints a string of characters.
%% : Prints a percent sign (%).
%d : Prints an integer.
%i : Also prints an integer.

## Compilation :
Use that command line to compile: 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Requirements :
All the files were compiled on Ubuntu 20.04 LTS using gcc.
Files use the Betty style. They were checked using 
betty-style.pl and betty-doc.pl

## Examples :
_printf("Character: %c\n", 'H');
output : Character: H

_printf("String: %s\n", "Hello, World!");
output : String: Hello, World!

_printf("Percent sign: %%\n");
output : Percent sign: %

## Flowchart :

<img width="463" alt="Capture d’écran 2024-11-29 à 14 33 47" src="https://github.com/user-attachments/assets/41bf4b28-6aa0-4d1f-9923-782e01b88a76">


writted by Vitushan and Said.
