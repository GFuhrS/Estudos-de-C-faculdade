#include <stdio.h>
#include <string.h>

int main(){
     char mensagem [100];
     char nome[50];
     
    printf("\nDigite seu nome: ");
       gets(nome);
       
  int idade;
    printf("\nDigite sua idade: ");
       scanf("%d", &idade);
       
    strcat(mensagem, nome); // Adiciona o NOME a mensagem do final que ainda n tem nada
    
    if (idade >= 18) // confere se é <> de idade
        strcat(mensagem, " é maior de idade."); // adiciona o > ou < idade na mensagem depois do nome, a mensagem é so o nome
    else 
        strcat(mensagem, " é menor de idade.");
        
    printf("%s\n", mensagem); //junta tudo, nome + mensagem é > ou < idade e envia pro usuario

    return 0;
    
}