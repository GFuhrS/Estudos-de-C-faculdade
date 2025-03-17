// escreva um programa que leia o nome do usuário
//caracteres o nome ocupa (strlen). Informe a capacidade da variável com o comando sizeof.

#include <stdio.h>
#include <string.h>
int main(){
  
    char nome[100];
   
    printf ("\n Digite seu nome:");
     gets (nome);

    int tamanhoDaString1 = strlen(nome);
    int capacidadeDaVariavel = sizeof(nome);
     
    printf ("\nTamanho da string é: %d", tamanhoDaString1);
    printf ("\nA capacidade é: %d", capacidadeDaVariavel);
    printf ("\nSeu nome é: %s", nome);

}
