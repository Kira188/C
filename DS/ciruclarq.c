#include <stdio.h>

#define MAX_SIZE 4

int queue[MAX_SIZE];
int REAR = 0;
int FRONT = 0;

void enqueue(int element) {
    //if ((REAR + 1) % MAX_SIZE == FRONT) {
    if(REAR==FRONT-1||(FRONT==0&&REAR==MAX_SIZE-1)){
        printf("Queue is full\n");
    } else {
        queue[REAR] = element;
        REAR = (REAR + 1) % MAX_SIZE;
    }
}

int dequeue() {
    if (REAR == FRONT) {
        printf("Queue is empty\n");
        return -1; // Return -1 or any suitable value to indicate an error or empty queue
    } else {
        int element = queue[FRONT];
        FRONT = (FRONT + 1) % MAX_SIZE;
        return element;
    }
}

int main() {
    // Example usage
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Dequeued: %d\n", dequeue());
    enqueue(40);
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    //enqueue(50);
    
    
    
    
    return 0;
}
