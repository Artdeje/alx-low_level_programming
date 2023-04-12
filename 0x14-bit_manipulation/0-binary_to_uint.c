#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - takes binary and makes in an integer lived along
 *a: is a letter and is siblings to b
 *b: is also sibling to a
 *Return: peepeepoopoo
 */


unsigned int binary_to_uint(const char *a);
{
	int index;
	unsigned int dec_value = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++);

		if (b[index] == '1')
			dec_value = ((2 * dec_value) + 1);
		else if (b[index] == '0')
			dec_value = dec_value * 2;
		else
			return (0);
	}
	return (dec_value);
}
