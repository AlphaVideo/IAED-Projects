/* Source file made by Tomas Pereira */

/* Implementation of the auxiliary functions used throughout the project */

#include "auxiliary.h"

/* Copies a string to a new batch of memory with the corresponding size. Returns a pointer. */
char* strdupl(const char* str)
{
    size_t size = strlen(str) + 1;
    char *cpy = malloc(size);

    if (cpy) 
        memcpy(cpy, str, size);
    
    return cpy;
}

/* Obtains the hash key for a hashtable, when given the name string */
int stringhash(char* name)
{
    int  i, key = 0;

    for (i = 0; name[i] != '\0'; i++)
        key = (key * MULTPRIME + name[i]) % HASHSIZE;
    

    return key;
}
