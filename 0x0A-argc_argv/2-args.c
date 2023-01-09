#include <stdio.h>
#include "main.h"

/**
* main - print each argment passed
* @argc: argument
* @argv: pointer to array
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
