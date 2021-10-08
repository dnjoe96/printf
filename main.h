#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct Set - A specifier - function pair
 * @spec: Char - the format specifier
 * @print: Special function implemented to print data of a given
 * specifier to stdout
 *
 * Description: A specifier - function pair
 */
typedef struct Set
{
	char spec;
	int (*print)(va_list arg);
} set;

int print_d(va_list list);
int print_rot13(va_list list);
int print_rev(va_list list);
int print_str(va_list list);
int print_char(va_list list);
int _printf(const char*, ...);

#endif
