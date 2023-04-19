#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the program  stdout.
 * @filename: A is the pointer to be the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails it will print solution NULL 0.
 * The O/w - the actual number of bytes the function that set to read and print.
**/
ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t o, r, w;
	char *buffer;
	
	if (filename == NULL)
		return (0);
	
	buffer = malloc(sizeof(char) *letters);
	if (buffer == NULL)
		return (0);
	
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letter);
	w = write(STDOUT_FILENO, buffer, r);
	
	if (o == -1 || r == -1 || w == -1 || w !=r)
	{
		free(buffer);
		return (0)
	}
	
	free(buffer);
	close(0);
	return (w);
}
