/*escreva um programa que cria uma string, 
peça para o usuário digitar uma palavra. 
se a palavra digitada for "senha secreta",
escreva a mensagem: "senha correta", senão escreva "senha incorreta". 
usar strcmp para comparar. combinar com sentença if/else */

#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    printf("digite a senha correta para entrar no sistema:\n");
    gets(s);
    // não botar = pq senão ele da algum erro maluco
    if(strcmp(s,"senha secreta")==0)
        printf("Senha correta você obteve acesso!");
     else
        printf("Senha incorreta");
}
