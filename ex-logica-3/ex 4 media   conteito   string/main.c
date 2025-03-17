#include <stdio.h>
#include <string.h>
   int main() {
    
    float p1, p2, trab, media;
    int faltas;
    char conceito[2] = "";      
    char situacao[30] = "";
    char mensagem[100] = "";
    
    printf("Digite a nota da p1: ");
     scanf("%f", &p1);
    printf("Digite a nota da prova 2: ");
     scanf("%f", &p2);
    printf("Digite a nota do trabalho: ");
     scanf("%f", &trab);
    printf("Digite o numero de faltas: ");
     scanf("%d", &faltas);
    media = (p1 + p2 + trab) / 3;
    
    if (faltas >= 5) {
        strcpy(conceito, "E");
        strcpy(situacao, "Reprovado por faltas");} 
        else  if (media >= 8) {
            strcpy(conceito, "A");
            strcpy(situacao, "Aprovado");
        } else if (media >= 7) {
            strcpy(conceito, "B");
            strcpy(situacao, "Aprovado");
        } else if (media >= 6) {
            strcpy(conceito, "C");
            strcpy(situacao, "Em recuperação!");
        } else { // media baixa nen faz o calculo ja joga
            strcpy(conceito, "D");
            strcpy(situacao, "REPROVADO!");}
    sprintf(mensagem, "Conceito: %s. Situacao: %s.", conceito, situacao);
    printf("%s\n", mensagem);

    return 0;
}