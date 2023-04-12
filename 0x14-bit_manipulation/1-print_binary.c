/**
*Project owner: Artdeje rutura
*Code reference: https://techiedelight.com
**/

#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
char* toBinary(int p, int len)
{
    char* binary = (char*)malloc(sizeof(char) * len);
    int k = 0;
    for (unsigned i = (1 << len - 1); i > 0; i = i / 2) {
        binary[k++] = (p & i) ? '1' : '0';
    }
    binary[k] = '0';
    return binary;
}

int main(void)
{
    int p = 5;
    int len = 30;

    char* binary = toBinary(p, len);
    printf("The binary presentation of %d is %s", p, binary);
    free(binary);

    return 0;
}
