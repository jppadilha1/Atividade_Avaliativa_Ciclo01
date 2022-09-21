#include <stdio.h>

int main()
{
    int num,cont=1;
 
    printf("Digite um número :");
    scanf("%d", &num);
    
    for(cont = 1;cont <= 10;cont++){
        printf("%d * %d = %d \n",num,cont,(num*cont));
    }
     printf("----------------- \n");
    while(num > 1){
        num--;
    for(cont = 1;cont <= 10;cont++){
        printf("%d * %d = %d \n",num,cont,(num*cont));}
         printf("----------------- \n");
    }

    return 0;
}




