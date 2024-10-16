#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_table.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return hash_djb2(key) % size;
}

