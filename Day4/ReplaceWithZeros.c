#include<stdio.h>

int main(){
    int rowSize = 3;
    int colSize = 3;
    int arr[3][3] = {
                        {1,2,3},
                        {4,-1,6},
                        {7,8,-8}
                    };

    printf("Before Replacing: \n");
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            if(arr[i][j] < 0){
                arr[i][j] = 0;
            }
        }
    }
    
    printf("After Replacing: \n");
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }





}