
#include "ft_printf.h"

int main()
{
    int theirs;
    int mine;
    void *ptr;

    mine = ft_printf(" %p \n", -2147483648);
    theirs = printf(" %p \n", -2147483648);
    //ft_putnbr(mine);
    //ptr = "b";
    //mine = ft_printf("%s%d\n", "aaaaa", 22);
    //ft_printf("%%%%\n");
    //printf("%x\n", 22211);
    //theirs = printf("%%%%\n");
    //ft_printf("\n");
    //ft_putnbr(mine);
    //ft_printf("\n");
    //ft_putnbr(theirs);
    //printf("%c %d hello %s % ", 'a', 2, "Ayman");
    //printf("%c %d hello %s % ", 'a', 2, "Ayman");
    //ft_printf("%i\n", 9223372036854775807);
    //printf("%i\n", 9223372036854775807);
    return (0);
}