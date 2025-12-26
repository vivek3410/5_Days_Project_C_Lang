#include<stdio.h>
int main(){

    int size;
    int arr[100];
    int target;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    

    for(int i = 0;i<size;i++){
        printf("Enter the element at position: %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the key: ");
    scanf("%d",&target);

    for(int i = 0;i<size;i++){
        if(arr[i] == target){
            printf("Element found at index: %d",i);
            break;
        }
    }

    printf("\n");
}