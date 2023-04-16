#include <stdio.h>
#include "main.h"

/**
 * create_file - creates the I/O  file in C program.
 * @filename: filename will be generated as we command the instructions.
 * @text_content: content writed in the file.
 * Return: It must return 1 if it success.returns otherwise -1 if it fails.
**/
int create_file(const char *filename, char *text_content);
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
