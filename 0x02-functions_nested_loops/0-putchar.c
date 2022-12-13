#include "main.h"

/**
 * main- this is the entry point of the program
 * Description: this function prints out "_putchar"
 * Return: this returns a default value of 0
 */

int main(void)
{
	int i;
	char output[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);

		if (i == 7)
		{
			_putchar('\n');
		}
	}

	return (0);
}
