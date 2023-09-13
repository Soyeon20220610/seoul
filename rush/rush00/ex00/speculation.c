#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int x, int y)
{
    int i = 0;
    int j = 0;

    while (i<y)
    {
        j = 0;
        while (j<x)
        {
            if (j == 0 && (i == 0 || i == y-1))
                ft_putchar('A');
            else if (j == x-1 && (i == 0 || i ==y-1))
                ft_putchar('C');
            else if (i == 0 || i == y-1 || j == 0 || j==x-1)
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int char_to_int(char *value)
{
    int flag = 0;
    long long res = 0;

    if (*value == '-')
    {
        flag = 1;
        value++;
    }
    while ('0'<=*value && *value <= '9')
    {
        res = 10 * res + *value - '0';
        value++;
    }
    if (flag == 1)
    {
        res = -res;
    }
    return (res);
}

int main(int argc, char **argv)
{
    int x;
    int y;

    if (argc != 3)
    {
        write(1, "you should give 2 numbers",25);
        return (1);
    }
    x = char_to_int(argv[1]);
    y = char_to_int(argv[2]);
    rush (x,y);
}