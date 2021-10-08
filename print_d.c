#include "main.h"

/**
 * print_d - print integar to stdout
 *
 * @list: A variable list of va_list type from stdarg.h
 * Return: Int - The number of characters printed
 */
int print_d(va_list list)
{
	unsigned int aux_Num, count_Zero, count, i;
	int a;

	a = va_arg(list, int);

	count = 0;
	if (a < 0)
	{
		a = a * -1;
		i = 45;
		count += write(1, &i, 1);
	}

	aux_Num = a;
	count_Zero = 1;

	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
	}

	while (count_Zero >= 1)
	{
		i = ((a / count_Zero) % 10) + 48;
		count += write(1, &i, 1);
		count_Zero /= 10;
	}
	return (count);
}
