#include <unistd.h>

int pw_count_chars(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    } 
    return i;
}