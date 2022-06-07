#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b1,s;


    printf("informe um numero:");
    scanf("%f",&b1);

    if(s=b1/5){
       // printf("%2.1f e divisivel por 5:   %2.1f\n",b1,s);
        }if(s==0||5){
            printf("%2.1f e divisivel por 5:   %2.2f\n",b1,s);
        }else{
            printf("o valor nao e divisivel por 5.\n");
        }


    return 0;
}
