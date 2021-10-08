#include "main.h"

/**
 * print_str - prints string
 *
 * @s: string input
 * Return: Int response
 */
int print_str(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s)
	{
		_putchar(*s);
		s++;
	}

	return (0);
}
