void print_chars(int x, char cbeg, char cmid);
int ft_putchar(char c);

void rush(int x, int y)
{
    int length = 0;
    print_chars(x, 'o', '-');
    length++;
    ft_putchar('\n');
    while (length < y - 1)
    {
        print_chars(x, 'o', '-');
        ft_putchar('\n');
        length++;
    }
    if (y >= 2)
        print_chars(x, 'o', '-');
}

void print_chars(int x, char cbeg, char cmid)
{
    int n = 0;
    while (n < x)
    {
        if (n == 0 | n == x - 1)
            ft_putchar(cbeg);
        else
            ft_putchar(cmid);
    n++;
    }
}