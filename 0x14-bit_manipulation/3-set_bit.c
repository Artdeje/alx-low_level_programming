#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @index: The index to set the value at - indices start at 0.
 * @n: A pointer to the bit.
 * Return: If an error occurring it will print -1.
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
