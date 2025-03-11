#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media;

    printf("Digite as quatro notas obtidas:\n");
    // com esse scan n precisa ficar botando 99 linhas de print+scan
    if (scanf("%f %f %f %f", &n1, &n2, &n3, &n4) != 4) {
        printf("Entrada inválida! Digite apenas números usando . para casas decimais.(somente algarismos, sem letras ou palavras).\n");
        return 1;
    }
   // botar media/calculos SO depois que pegar os valores das variaveis, senão o programa se perde pq ainda n tem valores
    media = (n1*1 + n2*2 + n3*3 + n4*4) / (10);

    printf("A média ponderada é: %.2f\n", media);

    return 0;
}