#include "main.h"

/**
* _isupper - will check it character is uppercase
* @c: the chracter to check
* Return: 1 if uppercase character 0 if not
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
