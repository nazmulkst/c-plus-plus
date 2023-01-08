#include <stdio.h>

int main(){
    int arr[] = {7, 3, 44, 1, 5, 99, 2, 17};

    int i, j, min_index, temp, size;

    size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < size - 1; i++){
        min_index = i;

        for(j = i+1; j < size; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        if(min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    printf("Selection Sort Arry: ");

    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}