#include<stdio.h>
int main(){
    int a;
    int b;

    printf("Enter a and b values: ");
    scanf("%d%d",&a,&b);

    int c;
    printf("Before Swapping: ");
    printf("a = %d and b = %d\n",a,b);

    c = a;
    a = b;
    b = c;
    
    printf("After Swapping: ");
    printf("a = %d and b = %d",a,b);


}