#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bit(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
