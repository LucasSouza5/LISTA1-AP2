#include <stdio.h>

int main()
{
    int numero, x;
    
    printf("Digite um numero: ");
    scanf("%d", &numero); 
    
    if (numero < 0)
        printf("\nO número digitado é negativo");
     
    return 0;
}
