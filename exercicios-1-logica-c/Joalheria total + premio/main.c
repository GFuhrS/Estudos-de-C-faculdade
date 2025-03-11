
#include <stdio.h>

int main() {
    float precoUnitario, total, premio;
    int quantidade;
    // peço o preço e a quantidade de produtos (e se o preço for diferente? X.X)
    
    printf("Digite o preço unitário do produto:");
    scanf("%f", &precoUnitario);
    printf("Digite a quantidade de produtos comprados:");
    scanf("%d", &quantidade);
    
    // se a quantidade de produtos for maior que 0 então rode isso senão mostra o erro la em baixo
    if (quantidade > 0) { 
        total=precoUnitario*quantidade;
        premio=total*2;
    // não precisa usar & nas variaveis se tiver o print f só o %algumaCoisa ja funciona
    printf("Total gasto:%.2f\n", total);
    printf("Premio a ser dado ao cliente:%.2f\n", premio);
    }
    
    // se se for menor que 0 a quantidade não precisa rodar isso então so termina o programa e manda msng de erro
    else { printf("Quantidade inválida! Insira um valor maior que zero para a quantidade de produtos.\n");
}
return 0;
}