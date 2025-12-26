#include<stdio.h>

int main(){

    int arr[100];

    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    for(int i = 0;i<size;i++){
        printf("Enter the element at pos %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int i = 0;
    int j = size - 1;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // for(intitalization;condition;updation){
    // Swap(arr[i],arr[j])
    // }

    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}