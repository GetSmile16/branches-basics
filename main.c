#include <stdio.h>

int minus(int a, int b)
{
    return a - b;
}

int main()
{
    int n = 8;
    int m = 2;
    printf("Hello, World!");
    printf("%d - %d = %d", n, m, minus(n, m));
    return 0;
}
