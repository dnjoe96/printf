#include <stdarg.h>
#include "main.h"

/**
 * _printf - printf function
 *
 * @format: formatted string
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	const char *traverse;
	va_list list;

	va_start(list, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			if (*traverse == '\0')
			{
				return (0);
			}
			_putchar(*traverse);
			traverse++;
		}

		traverse++;
		switch (*traverse)
		{
		case 'c':
			print_char(va_arg(list, int));
			break;
		case 'i':
			print_d(va_arg(list, int));
			break;
		case 'd':
			print_d(va_arg(list, int));
			break;
		case 'b':
			break;
		case 's':
			print_str(va_arg(list, char*));
			break;
		case 'u':
			break;
		case 'o':
			break;
		case 'x':
			break;
		case 'X':
			break;
		case '%':
			_putchar('%');
			break;
		default:
			_putchar(*(traverse - 1));
			_putchar(*traverse);
			break;
		}
	}

	va_end(list);

	return (0);
}
