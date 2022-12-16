#include "main.h"

/**
 * print_numbers - prints 0 - 9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');

	_putchar(10);
}
