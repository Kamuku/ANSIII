#include <stdio.h>

void main()
{
    int n, i,j;
    char ch;
    printf("Introduza um numero e um caratere.");
    scanf("%d %c",&n,&ch);

    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n;j++)
            putchar(ch);
            putchar('\n');
    }
}
