#include<stdio.h>

int main(){
    int a;
    int b;

    printf("Enter the numbers a and b: ");
    scanf("%d%d",&a,&b);

    // printf("Enter the number for b: ");
    // scanf("%d",&b);

    printf("greater than: %d\n", a > b);
    printf("less than: %d\n", a < b);
    printf("less than equals to: %d\n", a <= b);
    printf("greater than equals to: %d\n", a >= b);
}