
#include <stdio.h>

int main()
{
    float numero1, numero2, numero3;
    
    printf("Digite os tres numeros que você quer multiplicar!\n");
    
   // se tu tentar dar o scan antes de usar esse checkzinho o programa fica num loop infinito pedindo o terceiro valor
    if (scanf("%f %f %f", &numero1, &numero2, &numero3) != 3) {
        printf("Entrada inválida! Digite apenas números usando . para casas decimais (somente algarismos, sem letras ou palavras).");
        return 1;
    }
   
    printf("A multiplicação é: %.1f", numero1 * numero2 * numero3);
    return 0;
}
