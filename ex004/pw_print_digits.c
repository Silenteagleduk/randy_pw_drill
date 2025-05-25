#include <unistd.h>
void pw_print_digits(void)
{
    //using an array to display stored numbers
    char num[11];
    int i = 0;
    
    while (i < 10)
    {
        char d = '0';
        num[i]= d + i;
        i++;
    }
    //learnt a new trick
    //can store new line in char arrays before null terminator must experiment further
    num[10] = '\n';
    write(1, &num, 11);
} 


//Attempt 2 succes
/*void pw_print_digits(void)
{
   //using Asci mathematics to display numbers
    int i = 0;
    while (i < 10)
    {
        char num = '0' + i;
        write(1, &num, 1);
        i++;   
    }
    write(1, "\n", 1);
}*/


//Attempt 1 success
/*void pw_print_digits(void)
{
//using Asci to display numbers
    char i = '0';
    while (i <= '9')
    {
        write(1,&i, 1);
        i++;
    }
    write(1, "\n", 1);
}*/
/*int main (void)
{
    pw_print_digits();
}*/