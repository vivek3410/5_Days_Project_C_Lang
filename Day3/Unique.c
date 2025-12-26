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
    int j = 0;

    for(i = 0;i<size;i++){
        for(j = 0;j<size;j++){
            if(arr[i] == arr[j]){
                break;
            }
        }

        if(i == j){
            printf("%d ",arr[i]);
        }
    }
}