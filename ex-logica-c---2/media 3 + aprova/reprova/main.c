#include <stdio.h>

int main() {
    float x, y, z, media;

    printf("Digite três números e obtenha a média do aluno: ");

    // Verifica se o usuario colocou 3 numeros e não algo aleatorio mudando as variaveis etc da pra por em tudo que pede numeros
    if (scanf("%f %f %f", &x, &y, &z) != 3) {
        printf("Entrada inválida! Digite apenas números (somente algarismos, sem letras ou palavras).");
        return 1;
    }

    // Calcula a média apenas se os valores forem numeros validos, com 2 casas decimais de resultado
    media = (x + y + z) / 3;
    // não esquecer o %f pra expecificar o que é esperado na media
    if (media < 7) {
      printf("A media foi %.2f\n", media);
      printf("Reprovado.:(\n ");
    } else { if (media >= 7) 
      printf("A media foi%.2f\n", media);
      printf ("Parabéns, aprovado.");
    }
    return 0;
}
