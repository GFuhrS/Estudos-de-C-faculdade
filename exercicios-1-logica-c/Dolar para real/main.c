
#include <stdio.h>

int main()
{
     float reais, cotacao, dolares;
     // pega o valor do real
     printf("Digite o valor em reais:\n");
    if (scanf("%f", &reais) != 1) {
        printf("Entrada inválida! Digite apenas números usando . para casas decimais (somente algarismos, sem letras ou palavras).\n");
        return 1;
    }
    // pega a cotação do dia/que o usuario informar
   printf("Digite o valor da cotação:\n");
    if (scanf ("%f", &cotacao) !=1){
    printf("Entrada inválida! Digite apenas números usando . para casas decimais (somente algarismos, sem letras ou palavras).\n");
     return 1;
    }
    // lembrar de botar a , SO DEPOIS DOS "" :)
    
     dolares = reais/cotacao;
     printf("O valor em dólares é: %.2f\n", dolares);

    return 0;
}
