#include "main.h"
#include <unistd.h>

/**
*_putchar-I write the character c to stdout
*@c: The character to print in our document
*
*Return: When succeed 1.
*On error, -1 is returned, end errmo is set appropriately.
**/
int _putchar(char c)

return(write(1,&c,1));
