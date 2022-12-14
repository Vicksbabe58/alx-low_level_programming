#include "main.h"
/**
 * times_table - this is the entry point of the program
 * Description: this function returns 1 or 0
 */
void times_table(void)
{
	int i;
	int j;
	int total;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			total = i * j;

			if (total >= 10)
			{
				_putchar((total / 10) + '0');
				_putchar((total % 10) + '0');
			} else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(total + '0');
				} else
				{
					_putchar(total + '0');
				}
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
