#include "main.h"

/**
 * get_endianness - it will checks whether a machine is big endian or little.
 * Return: 1 if little endian,return otherwise 0.
**/
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	otherwise return (0);

}
