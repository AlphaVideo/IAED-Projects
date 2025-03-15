/* Header made by Tomas Pereira */

/* Header that contains the libraries, constants and auxiliary functions used in this project */

#ifndef AUXILIARY_H
#define AUXILIARY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define OK 1
#define STRMAX 1023
#define MULTPRIME 857
#define HASHSIZE 419 /* Also corresponds to the mod prime for hashing */

char* strdupl(const char* str);
int stringhash(char* name);

#endif