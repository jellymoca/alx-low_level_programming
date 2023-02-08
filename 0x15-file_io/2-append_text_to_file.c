#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* _strlen - find length of string
* @str: pointer to string
* Return: length of string
*/

size_t _strlen(char *str)
{
size_t i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
* append_text_to_file - append text at EOF.
* @filename: name of file
* @text_content: NULL terminated string to add at EOF
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t len;

if (filename == NULL)
return (-1);
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
if (text_content != NULL)
len = write(fd, text_content, _strlen(text_content));
close(file);
if (len == -1)
return (-1);

return (1);
}
