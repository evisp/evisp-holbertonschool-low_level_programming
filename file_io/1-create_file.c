#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file, write_f, len = 0;

	if (text_content != NULL)
		while (text_content[len] != '\0')
			len++;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write_f = write(file, text_content, len);
	if (write_f == -1)
		return (-1);

	close(file);

	return (1);
}
