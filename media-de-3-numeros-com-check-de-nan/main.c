/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z, media;

	printf("Digite trC*s nC:meros: ");
	// verifica se o usuario digitou 3 numeros
	if(scanf("%f %f %f", &x, &y, &z) != 3)
		printf ("digite apenas numeros");


	// verifica se algum dos valores C) NaN
	if (isnan(x)||isnan(y)||isnan(z)) {
		printf("Digite um numero valido!\n");
		return 0;

	}
	// Calcula a mC)dia apenas se os valores forem vC!lidos
	media = (x + y + z) / 3;
	printf("A mC)dia C): %.2f\n", media);
	return 0;
}
