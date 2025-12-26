#include<stdio.h>
int main(){

    int size;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d",&size);

    for(int i = 0;i<size;i++){
        printf("Enter the element at position: %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i = 1;i<size;i++){
        if(min > arr[i]){
            min = arr[i];
        }

        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("Minimum: %d\n",min);
    printf("Maximum: %d",max);

    printf("\n");
}