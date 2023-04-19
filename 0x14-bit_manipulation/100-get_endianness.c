#include <stdio.h>
#include "main.h"

/**
*get_endianness-checks if a machine is tittke or big endian.
*Return: The program returns 0 for big, 1 for tille program.
**/
int get_endianness(void)
{
	unsigned int i=1;
	char *c=(char*)&i;
	return(*c);
}
