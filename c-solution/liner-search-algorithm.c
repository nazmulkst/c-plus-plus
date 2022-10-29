#include <stdio.h>

int main(){
    int i = 0, searchItem = 4;
    int arr[] = {1, 7, 9, 33, 5, 199, 4, 78, 45};

    for(i = 0; i < sizeof(arr); i++){
        if(arr[i] == searchItem){
            printf("Item Found, Index No# %d\n", i);
            return 0;
        }
    }
    printf("Item Not Found\n");

    return 0;
}