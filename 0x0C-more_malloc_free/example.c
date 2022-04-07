/* #include "main.h" */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int *malloc_checked(unsigned int b);

int main(void)
{
    int *i;

    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);

    free(i);
    return (0);
}

int *malloc_checked(unsigned int b)
{
        int *size;
        if (size == NULL)
                exit(98);
        size = malloc(b);
        return (size);
}

