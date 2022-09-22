#include "main.h"

/**
* leet - encodes a string into 1337 .
* @chi: string i used
* Return: chi
*/

char *leet(char *chi)
{
int count = 0, i;

int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

while (*(chi + count) != '\0')

{
for (i = 0; i < 5; i++)
{
if (*(chi + count) == lower_case[i] || *(chi + count) == upper_case[i])
{
*(chi + count) = numbers[i];
break;
}
}
count++;
}

return (chi);

}
