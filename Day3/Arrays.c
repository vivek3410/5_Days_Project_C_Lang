#include<stdio.h>

int main(){

    int size;
    int arr[size];

    printf("Enter the size of array: ");
    scanf("%d",&size);

    for(int i = 0;i<size;i++){
        printf("Enter the element at position: %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}