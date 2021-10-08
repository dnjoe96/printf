#include "main.h"
/**
 * print_rot13 - a function that encodes a string using rot13 and
 * prrint to stdout
 *
 * @list: A list of argument of va_list type from stdarg.h
 * Return: void
 */
int print_rot13(va_list list)
{
	char *s = va_arg(list, char*);
	int i, j, count;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		return (0);

	count = 0;
	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(a + j); j++)
		{
			if (*(s + i) == *(a + j))
			{
				count += write(1, (b + j), 1);
				break;
			}
		}
	}
		return (count);
}
