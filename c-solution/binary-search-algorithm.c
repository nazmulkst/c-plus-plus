#include <stdio.h>

int main(){
    int arr[] = {1, 7, 9, 11, 77, 99, 100, 170};

    int left, right, middle;
    int item = 9;

    left = 0;
    right = 7;

    while(left <= right){
        middle = (left + right) / 2;
        
        if(arr[middle] == item){
            printf("Item Found and Index No# %d\n", middle);

            return 0;
        } else if(arr[middle] < item){
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    printf("Item not found\n");

    return 0;


}