/**
 *Code: Arthur Dejemeppe
 *Codetype: C program
 * Use: Coding educational project for ALX cohort12.
 * */
#include <stdio.h>
#include <stdlib.h>
/**
 * C program which is running a number to binary
 * Amazing p is variable is presented
 * */
char *toBinary(int p, int len)																																			{																																										char* binary =	(char*)malloc(sizeof(char) * len);
	int k = 0;
	for (unsigned i =	(1 << len - 1); i > 0; i = i / 2) {
	binary[k++] =	(p & i) ? '1' : '0';
	}
	binary[k] = '\0';
	return binary;
}
	int main(void)
{
	int p = 5;
	int len = 11;
	char* binary = toBinary(p, len);
	printf("The binary representation of %d is %s", p, binary);
	free(binary);

	return 0;
}
