#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @list: A variable list of type va_list of stdarg.h
 * Return: Int - Number of characters printed
 */
int print_rev(va_list list)
{
	int i, len, count;
	char *s;

	s = va_arg(list, char*);

	if (*s == '\0')
		return (0);

	len = 0;

	while (*(s + len))
		len++;

	count = 0;

	for (i = len - 1; i >= 0; i--)
	{
		count += write(1, (s + i), 1);
	}

	return (count);
}
