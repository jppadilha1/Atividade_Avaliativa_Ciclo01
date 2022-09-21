#include <stdio.h>

int main()
{
    int cont;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &cont);
    
    for(cont = cont;cont >= 0;cont--){
        printf("%d\n", cont);
    }

    return 0;
}
