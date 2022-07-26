#include "main.h"
/**
*read_textfile - reads a text file and prints it to the POSIX standard output.
*@filename: the name of the text file
*@letters: number of letters
*Return:the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	rd = read(file, buff, letters);
	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);

	if (wr == -1)
	{
		return (0);
	}
	close(file);
	return (wr);
}
