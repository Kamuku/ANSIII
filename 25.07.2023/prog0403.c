#include <stdio.h>

void main()
{
    int n;
    n = 1;
    while(n<=10)
    {
        printf("5 X %.2d = %2d\n", n, 5*n);
        n = n+1;
    }
}
