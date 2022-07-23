#include <stdio.h>

/**
 * main - function
 * @argc: commandline count
 * @argv: commandline vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
