#include<stdio.h>

int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int factorial = 1;

    for(int i = 1;i<=num;i++){
        factorial = factorial * i;
    }

    printf("Factorial of a number: %d\n",factorial);
}