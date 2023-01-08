#include <stdio.h>
#define CAPACITY 3

int arr[CAPACITY];

int top = -1;

void push(int x){
    if(top < CAPACITY - 1){
        top = top + 1;
        arr[top] = x;
        printf("Inserted Data on stack %d\n", x);
        return;
    }
    printf("Exception! No Space\n");
    return;
}

int pop(){
    if(top >= 0){
        int val = arr[top];
        top--;
        return printf("Deleted Data from Stack %d\n", val);
    }
    printf("Empty Stack\n");
    return -1;
}

void printStack(){
    printf("Stack List:");
    for(int i = 0; i <= top; i++){
        printf(" %d", arr[i]);
    }
    printf("\ntop: %d\n", top);

    return;
}


int main(){
    printf("Implementing Stack on c\n");
    pop();
    push(10);
    push(20);
    pop();
    push(30);
    push(40);
    push(50);
    printStack();

    return 0;
}