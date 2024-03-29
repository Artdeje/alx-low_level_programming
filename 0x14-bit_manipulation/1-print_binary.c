#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Print showing the binary representation of a number.
 * @n: The number in binary presentation.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
