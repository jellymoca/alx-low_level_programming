/**
* substring_match - check substring after wildcard == s1
* @s1: string1
* @s2: string2
* @after_wldcd: placeholder
* Return: 1 if matched
*/

int substring_match(char *s1, char *s2, char *after_wldcd)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == '\0' && *s2 == '*')
return (substring_match(s1, s2 + 1, s2 + 1));
if (*s1 == '\0' && *s2 != '\0')
return (0);
if (*s2 == '*')
return (substring_match(s1, s2 + 1, s2 + 1));
if (*s1 == *s2)
return (substring_match(s1 + 1, s2 + 1, after_wldcd));
else
return (substring_match(s1 + 1, after_wldcd, after_wldcd));
}

/**
* wildcmp - compare string with wildcard match
* @s1: string1
* @s2: string2
* Return: 1 if matched
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (substring_match(s1, (s2 + 1), (s2 + 1)));
else
return (0);
}
