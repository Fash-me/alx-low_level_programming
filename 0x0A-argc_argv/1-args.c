#include <stdio.h>
/**
 * main - function
 * @argc: commandline number
 * @argv: commandline array
 * Return: return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
