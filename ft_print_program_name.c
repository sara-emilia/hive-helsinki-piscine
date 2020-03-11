int ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char **argv)
{
    if (argc == 1)
        ft_putstr(argv[0]);
        
    ft_putchar('\n');
    return (0);
}