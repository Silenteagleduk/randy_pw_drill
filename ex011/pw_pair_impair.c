#include <stdio.h>

char pw_pair_impair(char *str)
{
    if (str == NULL)
    {
        return 'N';
    }

    int i = 0;
    int n = 0;
    char pi;

    while (str[i] != '\0')
    {
        if(n == 0)
    {
        pi = 'N';
    }
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            n++;
        }
        i++;
    }

    
    if (n % 2 == 0)
    {
        pi = 'P';
    }
    else 
    {
        pi = 'I';
    }
    
    return pi;
}