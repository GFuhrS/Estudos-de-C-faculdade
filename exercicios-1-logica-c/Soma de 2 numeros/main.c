
#include <stdio.h>

int main()
{
     float numero1, numero2;
    
    printf("Olá, digite dois numeros para obter a soma!\nApenas algarismos!\n");
   // ve se são 2 numeros validos, se não for mostra a mensagem
    if (scanf("%f %f", &numero1, &numero2) != 2) {
        printf("Entrada inválida! Digite apenas números (somente algarismos, sem letras ou palavras).");
        return 1;
    }
   // .1 .2 .3 podem ser usados para mostrar casas decimais
    printf("A soma é: %.3f", numero1 + numero2);
    return 0;
}
