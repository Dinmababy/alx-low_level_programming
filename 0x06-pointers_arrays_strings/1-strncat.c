#include "main.h"
/**
* _strncat - can concatentate two string
* @dest: first string
* @src: second string
* @n: counter
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int b = 0, c = 0;
while (dest[b] != '\0')
b++;
while (src[c] != '\0' && n > c)
{
dest[b] = src[c];
b++;
c++;
}
if (n > 0)
{
dest[b] = '\0';
}
return (dest);
}
