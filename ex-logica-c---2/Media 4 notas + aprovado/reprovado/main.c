// Exercício 2.  Leia 04 (quatro) notas de um aluno, a primeira tem peso 1,
//a segunda peso 2, a terceira peso 3, a quarta peso 4.
//Calcule a média e informe se o aluno foi aprovado ou não.
//Usar 'else'. Caso a nota seja menor que 7 ele será reprovado.
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

 if (media < 7) {
      printf("A media foi %.2f\n", media);
      printf("Reprovado.:(\n ");
    } else { if (media >= 7) 
      printf("A media foi%.2f\n", media);
      printf ("Parabéns, aprovado.");
    }

    return 0;
}