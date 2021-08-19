#include <stdio.h>

int main(){
    int number;
    do{
        printf("\n Digite um numero entre 1 a 4: ");
        scanf("%d", &number);
        
        if(number > 1 && number < 4){
            printf("\n Entrada Invalida.");
        }
    }(number > 1 && number < 4)
    
    return 0;
}