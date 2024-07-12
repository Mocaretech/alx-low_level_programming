#include "main.h"

char *_strchr(char *s, char c)
{
	while (*s != c) 
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
