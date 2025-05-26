#include <unistd.h>

int pw_count_e(char *str)
{
    int i = 0;
    int num_e = 0;
    while (str[i] != '\0')
    {
        
        if (str[i] == 'e')
        {
            num_e++;
        }
        i++;
    }
    return num_e;
}