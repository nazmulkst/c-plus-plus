#include <stdio.h>

int main(){
    int arr[] = {99, 77, 3, 12, 1};
    int i, value, hole;

    for(i = 1; i < 5; i++){
        value = arr[i];
        hole = i;

        while(hole > 0 && arr[hole-1] > value){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }

    printf("Sorted Array\n\n");

    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}