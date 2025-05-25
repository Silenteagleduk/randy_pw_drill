#include <unistd.h>

void  pw_count_reverse(unsigned int n)
{
    unsigned int i = n;
    
    while (1)//so 1 means infinte loop and we stop manually inside the loop
    {
        char num = '0' + i;
        write(1, &num, 1);
        write(1, "\n", 1);
        if (i == 0)// note unsigned int if last digit is 0 goes infintite
                    // must stop manually
        {
            break;
        }
        i--;

    }
}
/*
int main (void)
{
     pw_count_reverse(9);
}*/