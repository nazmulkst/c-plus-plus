#include <stdio.h>

int main(){
    int arr[] = {88, 77, 3, 5, 1, 8};
    int i, j, min_index;

    for(i = 0; i < 6; i++){
        int min_index = i;
        for(j = i + 1; j < 6; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    for(i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}