#include <stdio.h>

int main()
{
    float peso, altura, imc;
    printf ("Qual o seu peso em KG(Kilograma)?\n");
     scanf ("%f", &peso);
    printf ("Qual a sua altura? (Ex: 1.65m, 1.80m)\n");
     scanf ("%f", &altura);
     
    imc = peso/(altura*altura);
    printf("Seu IMC é: %.2f\n", imc);
     
  if (imc <= 16) 
     {printf ("Você esta com peso baixo muito grave!");
    } else {   
  if (imc >= 16 && imc <= 16.99) { 
      printf ("Você esta com peso baixo grave!");
    } else {   
  if (imc >= 17 && imc <= 18.49){
       printf ("Você esta com baixo peso!");
    } else {
  if (imc >= 18.50 && imc <= 24.99)  {
      printf ("Seu peso esta normal!");
    } else {   
  if (imc >= 25 && imc <= 29.99){
       printf ("Você esta com sobrepeso!");
    } else {
  if (imc >= 30 && imc <= 34.99)  {
      printf ("Você esta com obesidade grau I");
    } else {   
  if (imc >= 35 && imc <= 39.99){
       printf ("Você esta com obesidade grau II");
    }  else {
  if (imc >= 40)  {
      printf ("Você esta com Obesidade grau III (obesidade mórbida)!");
    return 0;
}}}}}}}}}
    

