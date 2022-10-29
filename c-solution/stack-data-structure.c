#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int index = -1;

int push(int x){
    if(index < 2){
        index = index + 1;
        stack[index] = x;
        printf("Add Value on Stack %d\n", x);
        return 0;
    }

    printf("Exception! No Space on Stack\n");

    return -1;
}

int pop(){
    if(index >= 0){
        int val = stack[index];
        index = index - 1;
        return val;
    }
    return -1;
}

int peek(){
    if(index >= 0){
        return stack[index];
    }
    printf("No Data Available on Stack\n");
    return -1;
}

int main(){
    printf("Executing stack ...\n");
    push(10);
    push(20);
    printf("Peek Value on Stack %d\n", peek());
    push(30);
    printf("Remove Value on Stack %d\n", pop());
    push(40);
    printf("Peek Value on Stack %d\n", peek());
    return 0;
}