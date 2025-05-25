#include <unistd.h>

void pw_putchar_a(void)
{
    write(1, "a", 1);
}

/*int main(void)
{
    pw_putchar_a();
    return 0;
}*/