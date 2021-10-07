#include "main.h"

/**
 * print_d - print integar to stdout
 *
 * @a: Integar number
 * Return: Int
 */
int print_d(int a)
{
	unsigned int aux_Num, count_Zero;

	if (a < 0)
	{
		a = a * -1;
		_putchar(45);
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
		_putchar(((a / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (0);
}
