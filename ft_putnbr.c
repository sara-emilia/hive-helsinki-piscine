int ft_putchar(char c);

void ft_putnbr(int nb)
{
    if (nb < -2147483648 | nb > 2147483647)
        return;
    
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }

    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * (-1));
    }

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }

    else
        ft_putchar(nb + '0');
}