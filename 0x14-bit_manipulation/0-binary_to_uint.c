#include <stdio.h>
#include <stdlib.h>

/**
 *binary to unit takes binary and makes in an integer
 *A: is a letter and is siblings to b
 *B: will be a letter siblings to a
 *Return: Artdejeeee
 */

unsigned int binary_to_uint(const char *b);
int main(void);

{
	    {int index;
	unsigned int dec_value = 0;

	if (b == NULL)
		return (0);
	    }

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '1')
			dec_value = ((2 * dec_value) + 1);
		else if (b[index] == '0')
			dec_value = dec_value * 2;
		else
			return (0);
	}
	return (dec_value);
}
