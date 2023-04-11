#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file.
 * @letters: number of letters printed.
 * Return: numbers of letters read and printed. If it fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dre;
	ssize_t num_read, num_wrttn;
	char *buf;

	if (!filename)
		return (0);

	dre = open(filename, O_RDONLY);

	if (dre <= -1)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		return (0);

	num_read = read(dre, buf, letters);
	if (num_read < 0)
		free(buf);
	close(dre);

	buf[num_read] = '\0';

	num_wrttn = write(STDOUT_FILENO, buf, num_read);
	if (num_wrttn < 0 || num_wrttn != num_read)
		free(buf);
	close(dre);

	return (num_wrttn);
}
