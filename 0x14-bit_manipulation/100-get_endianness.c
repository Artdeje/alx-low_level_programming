/*
 *Owner: Artdeje
 *Tittle: Bit manipulation
 */
#include <stdio.h>
#include "main.h"

/**
 * Get endianness &  Checks ones.
 * Returns: If endian - 0.
 *         If little endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
