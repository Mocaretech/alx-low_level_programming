/*104-print_buffer.c*/
#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
	int offset, i;

	if (size <= 0)

	{
		printf("\n");

		return;
	}

	for (offset = 0; offset < size; offset += 10)

	{
		/* Print the offset*/

		printf("%08x: ", offset);
		/* Print the hex content, 2 bytes at a time*/
		for (i = 0; i < 10; i++)
		{
			if (offset + i < size)
				printf("%02x", (unsigned char)b[offset + i]);
			else
				printf("  ");
			if (i % 2 != 0)
				printf(" ");
		}

		/* Print the ASCII content*/

		for (i = 0; i < 10; i++)
		{
			if (offset + i < size)
			{
				char c = b[offset + i];
				if (isprint(c))
					putchar(c);
				else
					putchar('.');
			}
		}
		printf("\n");
	}
}
