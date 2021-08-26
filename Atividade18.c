#include <stdio.h>

    int main(){
        int number, even = 0, odd= 0;

        for (int i= 0; i < 200; i++){

            printf("Digite um numero: ");
            scanf("%d", &number);
            number = number%2;
            if (number == 0){
                even++;

            }else{
                odd++;
            }
        }
        printf ("Dos numeros digitados %d sao impares e %d sao pares.", odd, even);
        return 0;
    }