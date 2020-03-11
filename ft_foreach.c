#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i = 0;
    while (i < length)
    {
        (*f)(tab[i]);
        i++;
    }
}

void ft_putnbr(int nb)
{
    printf("%d", nb);
}

int main()
{
    int tab[] = {1, 2, 2};
    ft_foreach(tab, 3, &ft_putnbr);
}