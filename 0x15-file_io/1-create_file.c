#include "main.h"
/**
*create_file - function that creates a file.
*@filename: the name of the text file
*@text_content: string to write to the file
*Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
	{
		return (-1);
	}

	while (text_content[i] != '0')
		i++;

	wr = write(file, text_content, i);

	if (wr == -1)
	{
		return (-1);
	}

	close(file);
	return (wr);
}
