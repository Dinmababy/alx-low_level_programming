#include "main.h"

/**
*_isalpha - checks if a character is alphabetic.
*@c: The charater to be checked.
*
*Return:1 if character is letter, lowercase or uppercase, 0 otherwise.
*/

intt _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}
