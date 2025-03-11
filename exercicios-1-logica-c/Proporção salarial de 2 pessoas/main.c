
#include <stdio.h>

int main()
 
// LEMBRAR DE BOTAR AS VARIAVEIS DENTRO DA CHAVE -_- {{{{{{{}}}}}}}}}}}}}}}}}}
{
    float salarioP1, salarioP2, valorTotalConta;
    float salarioP1P2, proporcaoP1, proporcaoP2;
    float resultadoP1, resultadoP2;
    // infos de entrada
    printf("Digite o salario da primeira pessoa!\n");
    scanf("%f", &salarioP1);
    printf("Digite o salario da segunda pessoa!\n");
    scanf("%f", &salarioP2);
    printf("Digite o valor total da conta a ser dividida!\n");
    scanf("%f", &valorTotalConta);
    
    // o total dos 2 salarios tem que ir na direita senão a conta não bate
    //calculos que devem ser feitos
    salarioP1P2 = salarioP1 + salarioP2;
    proporcaoP1 = salarioP1 / salarioP1P2;
    proporcaoP2 = salarioP2 / salarioP1P2;
    
    resultadoP1 = proporcaoP1 * valorTotalConta;
    resultadoP2 = proporcaoP2 * valorTotalConta;
    //saida
    printf("A pessoa 1 deve pagar:%.2f\n", resultadoP1);
    printf("A pessoa 2 deve pagar:%.2f\n", resultadoP2);
    
    return 0;
}
