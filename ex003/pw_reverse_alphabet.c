#include <unistd.h>

void pw_reverse_alphabet(void)
{
    char i;
    i = 'z';
    while(i >= 'a')
    {
        write(1, &i, 1);
        i--;
    
    }
    write(1, "\n", 1);
    
}
