#include <stdio.h>
#include <math.h>

int main()
{
    int numero, quadrado, cubo, raiz, loga;
    
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%i", &numero); 
    
    quadrado= pow(numero,2);
    cubo = pow(numero,3);
    raiz = sqrt(numero);
    loga = log(numero);
    
    printf("\nO quadrado do numero digitado é: %i", quadrado);
    printf("\nO numero digitado ao cubo é: %i ", cubo);
    printf("\nA raiz quadrada do numero digitado é: %i ", raiz);
    printf("\nO logaritmo natural do numero digitado: %i ",loga);

    return 0;
}
