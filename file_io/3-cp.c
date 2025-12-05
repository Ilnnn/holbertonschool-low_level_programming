#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((n_read = read(fd_from, buffer, 1024)) > 0)
		{
			write(fd_to, buffer, n_read);
		}

	close(fd_from);
	close(fd_to);

	return (0);
}
