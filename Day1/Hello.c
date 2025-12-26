// 1. Preprocessing Derivative
#include<stdio.h>
#include<limits.h>
#include<float.h>

// 2. main function
int main(){
    int num = 100;
    printf("The integer value: %d\n",num);
    printf("Min: %d\n",INT_MIN);
    printf("Max: %d\n",INT_MAX);

    float a = 12.444;
    printf("The float value: %f\n",a);
    printf("Min: %d\n",FLT_MIN);
    printf("Max: %d\n",FLT_MAX);

    double b = 14.900000;
    printf("double value: %lf\n",b);
    printf("Min: %zu\n",DBL_MIN);
    printf("MAX: %zu\n",DBL_MAX);

    char c = 'A';
    printf("Character value: %c\n",c);
    printf("Min: %d\n",CHAR_MIN);
    printf("MAX: %d\n",CHAR_MAX);


    return 0;
}