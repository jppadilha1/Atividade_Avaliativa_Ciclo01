#include <stdio.h>

int main()
{
    int i = 1,x = 1,num,cont = 1;

    printf("Digite um número maior ou igual a 3 :");
    scanf(" %d", &num);
    
    if(num < 3){
        printf("Erro! o número deve ser maior ou igual a 3.");
    }else{
        
    printf("%d \n",i);
        for(num = num;cont < num;cont++){
            printf("%d \n",x);
            x = x + i;
            i = x - i;
        }
    }

    return 0;
}

