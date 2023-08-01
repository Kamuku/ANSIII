#include <stdio.h>

void main()
{
    int i,j, n;
    puts("Introduza um numero:");
    scanf("%d",&n);
    for(i=1, j=n; i<=n; i++, j--)
        printf("%d, %d\n",i, j);

}
