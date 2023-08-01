#include <stdio.h>
#include <locale.h>

void main()
{
    int i =1;
    while(i<=20)
    {
        i++;
        if(i==10)
            continue;
        else
            printf("%d ",i);
    }
}
