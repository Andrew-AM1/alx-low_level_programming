#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file.
 * @text_content: content to write to file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int dre, drea = -1;
	ssize_t num_wrttn = 0, num_totl = 0;

	if (!filename)
		return (-1);

	dre = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (dre <= -1)
		return (-1);

	if (text_content)
	{
		while (text_content[num_totl])
			num_totl++;
	}

	if (num_totl > 0)
	{
		num_wrttn = write(dre, text_content, num_totl);
		if (num_wrttn == num_totl)
			drea = 1;
	}
	else
	{
		drea = 1;
	}

	close(dre);
	return (drea);

}
