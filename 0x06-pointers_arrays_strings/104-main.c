/*104-main.c*/
#include <stdio.h>

void print_buffer(char *b, int size);

int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	
	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
