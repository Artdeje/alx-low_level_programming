#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - Prints the binary representation of the number
  * @b: The number to representing in binary in program
  * Showing the return
  * Return: 0
  */
void print_binary(unsigned long int b)
{
	if (b == 0)
	{
	_putchar('0');
	return;
}
	_divide(b);
}

/**
  * Divided in most codes
  * @b: shows all alerts
  *
  * Return: still the same
  */
void _divide(unsigned long int b)
{
	if (b < 1)
		return;

	_divide(b >> 1);

	if (b & 1)
		_putchar('1');
	else
		_putchar('0');
}
