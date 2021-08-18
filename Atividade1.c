#include <stdio.h>

int receiveinterger(int value){
	printf("\n Digite um número: ");
	scanf("%d",&value);
		return(value);
}

int addnumbers(int n1, int n2, int n3, int n4){
    int add;
    add = n1 +n2 + n3 + n4;
    return add;
}

int main()
{
    int number1,number2,number3,number4, all;
    number1 = receiveinterger(number1);
    number2 = receiveinterger(number2);
    number3 = receiveinterger(number3);
    number4 = receiveinterger(number4);
    all = addnumbers(number1,number2,number3,number4);
    printf("A soma total é: %d", all);
    return 0;
}
