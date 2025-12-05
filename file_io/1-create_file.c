#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int titi, lnin, wrtt;

	if (filename == NULL)
	{
		return (-1);
	}

	titi = open(filename, O_APPEND | O_WRONLY);
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
