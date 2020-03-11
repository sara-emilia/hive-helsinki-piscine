void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char **argv)
{
    int i = 1;
    while (i <= argc - 1)
    {
        ft_putstr(argv[argc - i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}