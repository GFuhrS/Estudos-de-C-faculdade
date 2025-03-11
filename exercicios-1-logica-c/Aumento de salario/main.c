#include <stdio.h>

int main() {
    int numeroFuncionario;
    float salarioAtual, inpc, indiceProdutividade, aumento;
    float salarioNovo;

    // numeros dos funcionarios salarios entrada do inpc etc..
    // da pra por um check de >0 pro numero do funcionario se quiser
    printf("Digite o numero do funcionario: ");
    scanf("%d", &numeroFuncionario);

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salarioAtual);

    printf("Digite o valor do INPC: ");
    scanf("%f", &inpc);

    printf("Digite o indice de produtividade: ");
    scanf("%f", &indiceProdutividade);
    
    // Aumento= Salario*0.75* INPC/100  + Salario * IndiceProdutividade / 100
    aumento = salarioAtual * 0.75 * inpc / 100 + salarioAtual * indiceProdutividade / 100;
    
    salarioNovo = salarioAtual + aumento;
    
    // NAO ESQUECER DOS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    printf("Numero do funcionario: %d\n", numeroFuncionario);
    printf("Aumento: %.2f\n", aumento);
    printf("Seu antigo salario era: %.2f\n",salarioAtual);
    printf("Seu novo salario é: %.2f\n", salarioNovo);

    return 0;
}