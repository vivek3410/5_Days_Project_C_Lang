#include<stdio.h>

int main(){

    int age;

    printf("Enter the age of person: ");
    scanf("%d",&age);

    if(age > 18){
        printf("Eligible to vote");
    }else{
        printf("Your not eligible to vote");
    }

}