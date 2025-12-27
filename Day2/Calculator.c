#include<stdio.h>

int add(int, int);
int mul(int,int);
int div(int,int);
int sub(int,int);
void menu();

int main(){
    float num1, num2;
    char op;

    menu();

    while(op != '#'){
        
        printf("Enter the two value: \n");
        scanf("%f %f",&num1,&num2);

        printf("Enter the operator: ");
        scanf(" %c",&op);

        float result = 0;

        switch(op){
            case '+':
                result = add(num1,num2);
                break;
            case '-':
                result = sub(num1,num2);
                break;
            case '*':
                result = mul(num1,num2);
                break;
            case '/':
                result = div(num1,num2);
                break;
            default:
                printf("Invalid operation");
                break;
        }

        printf("The result: %f",result);

        printf("\n");
    }
}

void menu(){
    printf(" ===== Calculator Menu ========\n");
    printf("+ for Addtion\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");
    printf("# for Exit\n");

}

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a - b;
}

int mul(int a,int b){
    return a * b;
}

int div(int a,int b){
    if(b == 0){
        printf("cannot divided by 0");
        return -1;
    }
    return a / b;
}