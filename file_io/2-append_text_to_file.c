#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_f, len, i;

	if (filename == NULL)
		return (-1);

	len = 0;
	if (text_content != NULL)
		for (i = 0; text_content[len] != '\0'; i++)
			len++;

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	write_f = write(file, text_content, len);
	if (write_f == -1)
		return (-1);

	close(file);

	return (1);
}
