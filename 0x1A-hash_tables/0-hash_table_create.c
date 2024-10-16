#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_table.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return NULL;
	}
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t));
	if (!table->array)
	{
		free(table);
		return NULL;
	}

	return(table);
}

