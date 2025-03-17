/**100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105 Refrigerante    | 2.00 */
#include <stdio.h>
#include <string.h>
int main()
{
    int codigo, quantidade;
    float preco, total;
    char item[30] = "";
    
    printf ("Digite o codigo do lanche!\n");
      scanf("%d", &codigo);
    
    printf("Digite a quantidade desejada:\n ");
     scanf("%d", &quantidade);
    
    if (codigo == 100) {
        strcpy(item, "Cachorro Quente");
        preco = 5.00;
    } else if (codigo == 101) {
        strcpy(item, "Bauru simples");
        preco = 6.00;
    } else if (codigo == 102) {
        strcpy(item, "Bauru c/ovo");
        preco = 8.00;
    } else if (codigo == 103) {
        strcpy(item, "Hamburguer");
        preco = 5.00;
    } else if (codigo == 104) {
        strcpy(item, "Cheeseburguer");
        preco = 7.50;
    } else 
        printf("codigo invalido, coloque o codigo de um lanche!");
        
    total =preco*quantidade;
    
    printf("\nPedido: %d unidade(s) de %s\n", quantidade, item); // joga quantidade + item
    printf("Total: R$ %.2f\n", total);
    
    return 0;}