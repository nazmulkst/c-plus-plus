#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 5

int arr[CAPACITY];

int front = 0, rear = -1, totalItem = 0;

bool isEmpty(){
    if(totalItem == 0){
        return true;
    }

    return false;
}

bool isFull(){
    if(totalItem == CAPACITY){
        return true;
    }

    return false;
}

void enqueue(int item){
    if(isFull()){
        printf("Exception! No Space\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    arr[rear] = item;
    totalItem++;
    printf("Added Item %d\n", item);
    return;
}

int dequeue(){
    if(isEmpty()){
        printf("Queue is empty\n");
    }
    int frontItem = arr[front];
    arr[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem -= 1;
    printf("Dequeue: %d\n", frontItem);
    return 0;
}

int printQueue(){
    printf("Queue: ");

    int i = 0;

    for(i = 0; i < CAPACITY; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printQueue();
    enqueue(40);
    dequeue();
    enqueue(50);
    enqueue(60);
    dequeue();
    enqueue(70);
    printQueue();
    enqueue(80);

    return 0;
}