#include <stdio.h>

int max3(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}

int maxT(int a, int b, int c)
{
    return (a >= b && a >= c) ? a : (b >= c ? b : c);
}

int main()
{
    printf('%d/n',maxT(3,2,5))
}