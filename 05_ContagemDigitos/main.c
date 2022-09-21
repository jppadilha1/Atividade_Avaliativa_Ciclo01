#include <stdio.h>

int main(){

  struct{
  char nome[50], email[50], tel[15];
  }Dados;
  int Digito1=0,Digito2 = 0,Digito3 = 0;
  
  printf("Digite um nome: ");
  scanf("%s", Dados.nome);
  printf("Digite um e-mail: ");
  scanf("%s", Dados.email);
  printf("Digite um telefone: ");
  scanf("%s", Dados.tel);
  
  while (Dados.nome[Digito1] != '\0'){
    Digito1++;
  }printf("Nome: %d dígitos\n", Digito1);
  
  while (Dados.email[Digito2] != '\0'){
    Digito2++;
  }printf("E-mail: %d dígitos\n", Digito2);
  
  while (Dados.tel[Digito3] != '\0'){
    Digito3++;
  }printf("Telefone: %d dígitos\n", Digito3);

  return 0;
}
