#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    while(n<100)
    {
      printf("Introduza os n�meros de 1 � 100: \n");scanf("%d",&n);
        fflush(stdin);
        if(n>=1 && n<=100)
        {
          printf("Voc� introduziu:%d\n",n);
        }
        else
            printf("Numero invalido.");
    }
}
