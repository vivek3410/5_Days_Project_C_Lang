#include<stdio.h>

int add(int,int); // signature of Function

int main(){

    int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);

    int res = add(a,b); // Calling

    printf("sum of values: %d\n",res);
}

// Definition
int add(int a,int b){
    int c = a + b;
    return c;
}