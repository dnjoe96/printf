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
	int i, j, count;
	va_list list;
	set arguments [] = {
		{'c', print_char},
		{'d', print_d},
		{'i', print_d},
		{'s', print_str},
	};
	
	if (format == NULL)
		return (-1);

	va_start(list, format);

	count = 0;

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '%')
			{
				count += write(1, "%", 1);
				format++;
				continue;
			}

			for (j = 0; j < 4; j++)
			{
				if (*(format + i + 1) == arguments[j].spec)
				{
					count += arguments[j].print(list);
					break;
				}
			}
			format++;
		}
		else
		{
			count += write(1, (format + i), 1);
		}
	}
	va_end(list);

	return (count);
}
