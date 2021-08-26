#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){


    int i, numbers[15];
    
    for ( i = 0; i < 15; i++){
        printf ("digite um numero: ");
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 15; i++){
        numbers[i] = sqrt(numbers[i]);
        printf ("%d, ", numbers[i]);
    }
    system("pause");
}