#include <stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top < CAPACITY - 1){
        top = top + 1;
        stack[top] = x;
        printf("Successfully Added Item %d\n", stack[top]);
    } else {
        printf("Exception! No Spaces\n");
    }
}

int pop(){
    if(top >= 0){
        int val = stack[top];
        top = top - 1;
        return val;
    }

    printf("Exception from pop! Empty Stack\n");
    return -1;
}

int peek(){
    if(top >= 0){
        return stack[top];
    }

    printf("Exception from peek! Empty Stack\n");
    return -1;
}

int main(){
    printf("Pop Item %d\n", pop());
    push(10);
    push(20);
    push(30);
    printf("Pop Item: %d\n", pop());
    push(40);
    printf("Pop Item: %d\n", pop());
    printf("Peek Item: %d\n", peek());

    return 0;
}