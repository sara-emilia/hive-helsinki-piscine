int ft_putchar(char c);

ft_putstr(char *str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}