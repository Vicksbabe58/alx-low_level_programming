#include "main.h"

/**
 * _isupper - checks the the input if its upper or not.
 * @c: input from user
 * Return: Always 1 or 0.
 */

int _isupper(int c)
{
	if ((c >= 65)  && (c <= 90))
		return (1);

	return (0);
}
