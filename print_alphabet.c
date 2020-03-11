#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_alphabet(void)
{
    char c;

    c = 97;
    while (c <= 122)
    {
        ft_putchar(c);
        c = c + 1;
    }
}

int main ()
{
    ft_print_alphabet();
    return (0);
}