#include <stdio.h>

int main (){

    int number1 = 0, number2 = 1, result = 0, quant, i;

    printf("Esceva a quantidade de numeros que vc deseja que seja somado: ");
    scanf("%d", &quant);

    for ( i = 0; i < quant; i++ ){

        result = number1 + number2;
        
        printf("%d,  ", result);
        number2 = number1;
        number1 = result;
    }
    return 0;
}