#include <stdio.h>

void main()
{
    int x, y ,tmp;
    printf("Introd. dois numeros ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d  %d\n",x,y);
}
