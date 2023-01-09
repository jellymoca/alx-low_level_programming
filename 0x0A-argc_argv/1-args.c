#include <stdio.h>
#include main.h
/**
* main - print number of arguments passed
* @argc: argument
* @argv: pointer to an array
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
printf(%dn, argc - 1);

return (0);
}
