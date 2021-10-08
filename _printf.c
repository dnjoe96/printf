#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - printf function
 *
 * @format: formatted string
 * Return: The total number of outputted characters
 */
int _printf(const char *format, ...)
{
	int i, j, count, find;
	va_list list;
	set arguments[] = {
		{'c', print_char},
		{'d', print_d},
		{'i', print_d},
		{'s', print_str},
		{'R', print_rot13},
		{'r', print_rev},
	};

	if (format == NULL)
		return (-1);

	va_start(list, format);

	count = 0;

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
				continue;
			find = 0;

			for (j = 0; j < 6; j++)
			{
				if (*(format + i + 1) == arguments[j].spec)
				{
					count += arguments[j].print(list);
					find = 1;
					format++;
					break;
				}
			}

			if (find != 1)
			{
				if (*(format + i + 1) == '%')
				{
					count += write(1, "%", 1);
					format++;
				}
				else
					count += write(1, (format + i), 1);
			}

		}
		else
		{
			count += write(1, (format + i), 1);
		}
	}
	va_end(list);

	return (count);
}
