
#include "ft_printf.h"

int main()
{
    int theirs;
    int mine;
    void *ptr;

    mine = ft_printf(" %u \n", -9);
    theirs = printf(" %u \n", -9);
    //ft_putnbr(theirs);
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