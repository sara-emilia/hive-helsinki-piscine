#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    int *nbr;

    a = 3;
    nbr = &a;
    ft_ft(nbr);
    printf("%d \n", a);
    return (0);
}