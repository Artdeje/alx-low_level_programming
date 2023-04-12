#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - takes binary and makes in an integer lived along
 *a: is a letter and is siblings to b
 *b: is also sibling to a
 *Return: number have been count
 */


unsigned int binary_to_uint(const char *a);
{
	unsigned int num = 0, mult = 1;
	int len;

	if (a == '\0')
		return (0);

	for (len = 0; a[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (a[len] != '0' && a[len] != '1')
			return (0);

		num += (a[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
