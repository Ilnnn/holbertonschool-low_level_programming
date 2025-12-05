#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
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
