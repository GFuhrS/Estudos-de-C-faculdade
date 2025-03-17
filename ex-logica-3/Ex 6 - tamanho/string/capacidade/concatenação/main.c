#include <stdio.h>
#include <string.h>
int main()
{
    char s1 [51] = "";
    char s2 [31] = "";
    printf ("Digite um nome de comida! \n");
    gets (s1);
    printf ("Digite um segundo nome de comida! \n");
    gets (s2);
    
    
    int tamanhoDaS1 = strlen(s1);
    int tamanhoDaS2 = strlen(s2);
    int capacidadeDaS1 = sizeof(s1);
    int capacidadeDaS2 = sizeof(s2);
    
    //capacidade e espaço
    printf("\nCapacidade da string 1: %d\n", capacidadeDaS1);
    printf("Espaço usado pela string 1: %d\n", tamanhoDaS1);
    
    printf("\nCapacidade da string 2: %d\n", capacidadeDaS2);
    printf("Espaço usado pela string 2: %d\n", tamanhoDaS2);
   
    int resultadoComp = strcmp (s1,s2);// comapração das 2 
    if (resultadoComp==0) {
        printf ("\nAs strings são iguais!\n");
    } else { 
        printf ("\n As strings são diferentes!\n");
    }
    
    if (tamanhoDaS1 + tamanhoDaS2 +1 <= capacidadeDaS1) {
        strcat (s1, " ");
        strcat (s1, s2);
        printf ("\n Deu para juntar as duas:\n %s", s1);
    } else {
        printf ("ERRO! Faltou espaço em memoria para juntar tudo :(\n");
    }
    
    return 0;
}
