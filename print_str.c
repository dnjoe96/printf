#include "main.h"

/**
 * print_str - prints string
 *
 * @list: A variable list of type va_list of stdarg.h
 * Return: Int - Number of characters printed
 */
int print_str(va_list list)
{
	int count;
	char *s;

	s = va_arg(list, char*);

	if (*s == '\0')
		return (0);

	count = 0;

	while (*s)
	{
		count += write(1, s, 1);
		s++;
	}

	return (count);
}
