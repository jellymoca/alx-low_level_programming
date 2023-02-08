#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - read text file and print it to POSIX STDOUT
* @filename: name of file
* @letters: letters to read and print
* Return: number of letters to read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t read_count, total_characters;
char *buffer;

if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file);
return (0);
}
read_count = read(file, buffer, letters);
close(file);
if (read_count == -1)
{
free(buffer);
return (0);
}
total_characters = write(STDOUT_FILENO, buffer, read_count);
free(buffer);
if (read_count != total_characters)
return (0);
return (total_characters);
}
