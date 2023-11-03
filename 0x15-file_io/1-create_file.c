#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fnd;
	int no_letters;
	int rwr;

	if (!filename)
		return (-1);

	fnd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fnd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_letters = 0; text_content[no_letters]; no_letters++)
		;

	rwr = write(fnd, text_content, no_letters);

	if (rwr == -1)
		return (-1);

	close(fnd);

	return (1);
}
