#include <stdlib.h>
#include "main.h"
/**
     * create_array - creates an array of characters.
     * @size: size of the array
     * @c: stored character
     * 
     * Return: pointer to an array of characters.
    */

char *create_array(unsigned int size, char c)
{
    char *ch;
    unsigned int i;

    if (size == 0)
        return (NULL);
    ch = malloc(sizeof(c) * size);
    if (ch == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        ch[i] = c;
    return (ch);    
}