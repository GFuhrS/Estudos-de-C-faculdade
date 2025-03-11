//  Faça um programa que leia a média do aluno e seu numero de faltas. 
//se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'.
//Se a média for menor que 7, foi reprovado por média. Senão, escreva 'Parabéns! você foi aprovado'.
#include <stdio.h>

int main() {
    float x, y, z,faltas, media;
     printf("Quantas faltas o aluno tem?\n");
     scanf("%f", &faltas);
    if (faltas >=5){
      printf("Você reprovou por faltas!");
   }  else {
     printf("Digite três números e obtenha a média do aluno: ");

    // Verifica se o usuario colocou 3 numeros e não algo aleatorio mudando as variaveis etc da pra por em tudo que pede numeros
    if (scanf("%f %f %f", &x, &y, &z) != 3) {
        printf("Entrada inválida! Digite apenas números (somente algarismos, sem letras ou palavras).");
        return 1;
    }
    // Calcula a média apenas se os valores forem numeros validos, com 2 casas decimais de resultado
    media = (x + y + z) / 3;
   
    if (media < 7)  {
         printf("A media foi %.2f\n", media);
      printf("Reprovado por falta de nota.:(\n ");
     
    }  else { if (media >= 7) 
         printf("A media foi %.2f\n", media);
      printf ("Parabéns, aprovado.");
    } 
       
   }
    return 0;
}
