/**infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = 18 anos ou mais
**/
#include <stdio.h>


int main()
{
    float idadeN;
    printf ("Qual a sua idade nadador?\n");
    scanf ("%f", &idadeN);
    // COLOCAR SEMPRE < ou > ANTES DE = NAO DEPOIS
  if (idadeN >= 5 && idadeN <= 7) 
     {printf ("Você pertence a categoria infantil A!");
    } else {   
  if (idadeN >= 8 && idadeN <= 10) { 
      printf ("Você pertence a categoria infantil B!");
    } else {   
  if (idadeN >= 11 && idadeN <= 13){
       printf ("Você pertence a categoria juvenil A!");
    } else {
  if (idadeN >= 14 && idadeN <= 17)  {
      printf ("Você pertence a categoria juvenil B!");
    } else {   
  if (idadeN >= 18)  {
      printf ("Você pertence a categoria adulto!");
    return 0;
}}}}}
    
}
