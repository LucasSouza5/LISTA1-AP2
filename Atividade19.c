#include <stdio.h>

    int main(){
        int number, even = 0, odd= 0,amount;

        printf("Digite quantos numeros o sistema ira difenciar par ou impar: ");
        scanf("%d", &amount);

        for (int i= 0; i < amount; i++){

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