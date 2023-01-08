#include <stdio.h>

int main(){
    int arr[] = {77, 3, 11, 44, 1, 7, 99, 103, 21, 9};
    int i, j, size;
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Array Size: %d\n", size);

    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");

    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}