#include "main.h"
/**
*append_text_to_file - function that appends text at the end of a file.
*@filename: the name of the text file
*@text_content: string to write to the file
*Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	while (text_content && text_content[i] != '\0')
		i++;
	wr = write(file, text_content, i);
	close(file);

	if (wr == -1)
		return (-1);
	else
		return (1);
}
