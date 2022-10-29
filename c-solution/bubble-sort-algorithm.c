#include <stdio.h>

int main(){
    int arr[] = {9, 33, 11, 2, 1, 5};
    int i, j, size = 6;

    for(i = 0; i < size-1; i++){
        for(j = 0; j < size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Bubble sort Algorithm Elements: ");

    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}