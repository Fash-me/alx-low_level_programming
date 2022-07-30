#include <stdio.h>
#include <stddef.h>
/**
 *main - header for prototypes
 *void  prototype()
 *int prototype()
 *char prototype()
 */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
