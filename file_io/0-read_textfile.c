#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Name of the file to read
 * @letters: Maximum number of characters to read and print
 *
 * Return: The actual number of characters read and printed,
 *         or 0 on failure (file can't be opened/read, write error,
 *         filename is NULL, or memory allocation fails)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nde, tmp;
	int file;
	char *bf;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
	{
		return (0);
	}

	nde = read(file, bf, letters);
	if (nde == -1)
	{
		free(bf);
		return (0);
	}

	tmp = write(STDOUT_FILENO, bf, nde);
	if (tmp == -1 || tmp != nde)
	{
		free(bf);
		return (0);
	}

	close(file);
	free(bf);
	return (nde);
}
