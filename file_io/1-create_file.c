#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Creates a file with permissions rw-------
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int titi, lnin = 0;
	int wrtt;

	if (filename == NULL)
	{
		return (-1);
	}

	titi = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (titi == -1)
		{
			return (-1);
		}

			if (text_content == NULL)
			{
				close(titi);
				return (1);
			}

				lnin = strlen(text_content);
				wrtt = write(titi, text_content, lnin);

				if (wrtt == -1 || wrtt != lnin)
				{
					close(titi);
					return (-1);
				}

					close(titi);
					return (1);
}
