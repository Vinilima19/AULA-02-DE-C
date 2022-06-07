#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("informe o primeiro valor:");
    scanf("%d",&n1);

    printf("informe o segundo valor:");
    scanf("%d",&n2);

   if (n1>n2){
   printf("\n o valor de %d e maior que %d \n\n",n1,n2);

    }else printf("\n %d e menor que %d \n\n",n1,n2);


    return 0;
}
