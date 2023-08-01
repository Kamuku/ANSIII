#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    while(n<100)
    {
      printf("Introduza os números de 1 à 100: \n");scanf("%d",&n);
        fflush(stdin);
        if(n>=1 && n<=100)
        {
          printf("Você introduziu:%d\n",n);
        }
        else
            printf("Numero invalido.");
    }
}
