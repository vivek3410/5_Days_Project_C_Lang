#include<stdio.h>

int main(){
    float num1, num2;
    char op;

    while(op != '#'){
        printf(" ===== Calculator Menu ========\n");
        printf("+ for Addtion\n");
        printf("- for Subtraction\n");
        printf("* for Multiplication\n");
        printf("# for Exit\n");

        printf("/ for Division\n");

        printf("Enter the two value: \n");
        scanf("%f %f",&num1,&num2);

        printf("Enter the operator: ");
        scanf(" %c",&op);

        float result = 0;

        switch(op){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if(num2 == 0){
                    printf("cannot divided by 0");
                    break;
                }
                result = num1 / num2;
                break;
            default:
                printf("Invalid operation");
                break;
        }

        printf("The result: %f",result);

        printf("\n");
    }
}