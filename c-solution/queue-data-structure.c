#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 5

int queueArr[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull(){
    if(totalItem == CAPACITY){
        return true;
    }

    return false;
}

bool isEmpty(){
    if(totalItem == 0){
        return true;
    }

    return false;
}


void enqueue(int item){
    if(isFull()){
        printf("NO Space Available\n");
        return;
    }

    rear = (rear + 1) % 5;
    queueArr[rear] = item;
    totalItem++;
    printf("queue added item %d\n", item);
}

int dequeue(){
    if(isEmpty()){
        printf("Sorry, the queue is empty\n");
        return -1;
    }
    int frontItem = queueArr[front];
    queueArr[front] = -1;
    front = (front + 1) % 5;

    totalItem--;

    return frontItem;
    
}

void printQueue(){
    if(totalItem > 0){
        int i = 0;
        printf("Queue: ");
        for(i = 0; i < CAPACITY; i++){
            printf("%d ", queueArr[i]);
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    printf("Deleted from Queue %d\n", dequeue());
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    printQueue();

    return 0;
}