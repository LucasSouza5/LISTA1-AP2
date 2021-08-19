#include <stdio.h>

int main()
{
    int numero, x;
    
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &numero); 
    
    x= (numero % 2);
    
    if (numero == 0)
        printf("\nO número %d é par", numero);
   else
        printf("\nO número %d é ímpar", numero);
   
    return 0;
}
