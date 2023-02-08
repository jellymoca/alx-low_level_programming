#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* _strlen - find length of string
* @str: pointer to string
* Return: len of string
*/
size_t _strlen(char *str)
{
size_t i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
* create_file - create file.
* @filename: name of file
* @text_content: NULL terminated string to write to file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file;
ssize_t len = 0;

if (filename == NULL)
return (-1);
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
return (-1);
if (text_content != NULL)
len = write(file, text_content, _strlen(text_content));
close(file);
if (len == -1)
return (-1);

return (1);
}
