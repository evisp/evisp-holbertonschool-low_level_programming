#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_f, write_f;
	char *text;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	read_f = read(file, text, letters);
	if (read_f == -1)
		return (0);

	write_f = write(STDOUT_FILENO, text, read_f);
	if (write_f == -1)
		return (0);

	free(text);
	close(file);

	return (read_f);
}
