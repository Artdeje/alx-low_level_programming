#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
