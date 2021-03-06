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
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#define min(x, y) (((x) < (y)) ? (x) : (y))

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
char *iterate_zeroes(char *str);
int get_digit(char c);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
int main(int argc, char *argv[]);

int _putchar(char c);
