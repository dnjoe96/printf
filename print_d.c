#include "main.h"

/**
 * print_d - print integar to stdout
 *
 * @a: Integar number
 * Return: Int
 */
int print_d(int a)
{
	unsigned int num_abs, aux_Num, count_Zero;

	if (a < 0)
	{
		a = a * -1;
		putchar(45);
	}

	aux_Num = a;
	count_Zero = 1;

	{
		aux_Num /= 10;
		count_Zero *= 10;
	}

	while (count_Zero >= 1)
	{
		putchar(((a / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (0);
}
