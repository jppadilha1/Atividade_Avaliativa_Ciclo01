#include <stdio.h>

int main()
{
    int dia, mes, ano, a, b, c;
    char resp;
    
    printf("Olá deseja saber seu tipo de Perfil ?\n");
    printf("Digite ( S ) para continuar e ( N ) se quiser sair :");
    scanf("%c", &resp);
    
    if(resp == 'S' || resp == 's'){
        
    printf("Digite seu Dia de Nascimento:\n");
    scanf("%d", &dia);
    printf("Digite seu Mês de Nascimento:\n");
    scanf("%d", &mes);
    printf("Digite seu Ano de Nascimento:\n");
    scanf("%d", &ano);
    printf("---------------------------------");
    
    a =((dia*100 + mes) + ano);
    b =(a/100) + (a % 100);
    c = b % 5;
    
    if(c == 0){
    printf("\nVocê é Timido!");
    }if(c == 1){
    printf("\nVocê é Sonhador!");
    }if(c == 2){
    printf("\nVocê é Paquerador!");
    }if(c == 3){
    printf("\nVocê é Atraente!");
    }if(c == 4){
    printf("\nVocê é Irresistivel!");
    }
    return 0;
    }
}    



