#include <stdio.h>

int main()
{
    float weight;
    
    printf("Escreva seu peso em quilos: ");
    scanf("%f",&weight);
    
    printf ("Seu peso em gramas e: %.0f ", (weight*1000));
}