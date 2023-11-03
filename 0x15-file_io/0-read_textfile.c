#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fnd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fnd = open(filename, O_RDONLY);

	if (fnd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(fnd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fnd);

	free(buff);

	return (nwr);
}
