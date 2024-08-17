#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file.
 * @argc: The number of argument passed to tthe program.
 * @argv: Array of pointer to the argumemts
 *
 * Return: Return 0 on success, or an exit status code failure
 *
 * Description:
 * This program copies the content of file_from to file_to
 * If the nmbr of argument isnt correct the program print code 97 and code 98,
 * there is error in file_to
 * if the file_from and file_to cannot be closed it  will give code status 100
 */

int main(int argc, char *argv[])
{
	int file_from = open(argv[1], O_RDONLY);
	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t volume_read, volume_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

			if (file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
			exit(98);
		}


		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[2]);
			exit(99);

		}

		while ((volume_read = read(file_from, buffer, 1024)) > 0)

		{
			volume_write = write(file_to, buffer, volume_read);

				if (volume_write == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
					exit(99);
				}
		}

				if (close(file_from == -1))
					{
						dprintf (STDERR_FILENO, "Can't close fd %d",file_from);
						exit(100);
					}

				if (close(file_to == -1))
					{
						dprintf(STDERR_FILENO, "Can't close fd %d", file_to);
						exit (100);
					}


	return (0);


}
