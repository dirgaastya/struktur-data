#include <iostream>
using namespace std;

#define MAX 1000

struct Queue {
    int front, rear, size;
    int arr[MAX];
};

void initializeQueue(Queue& queue) {
    queue.front = queue.size = 0;
    queue.rear = MAX - 1;
}

bool isFull(Queue& queue) {
    return queue.size == MAX;
}

bool isEmpty(Queue& queue) {
    return queue.size == 0;
}

void enqueue(Queue& queue, int data) {
    if (isFull(queue)) {
        cout << "Queue overflow: cannot enqueue " << data << endl;
        return;
    }
    queue.rear = (queue.rear + 1) % MAX;
    queue.arr[queue.rear] = data;
    queue.size++;
    cout << "Enqueued " << data << " to queue" << endl;
}

int dequeue(Queue& queue) {
    if (isEmpty(queue)) {
        cout << "Queue underflow: no elements to dequeue" << endl;
        return -1;
    }
    int dequeuedData = queue.arr[queue.front];
    queue.front = (queue.front + 1) % MAX;
    queue.size--;
    cout << "Dequeued " << dequeuedData << " from queue" << endl;
    return dequeuedData;
}

int peek(Queue& queue) {
    if (isEmpty(queue)) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return queue.arr[queue.front];
}

// Contoh penggunaan Queue
int main() {
    Queue queue;
    initializeQueue(queue);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    cout << "Front element is " << peek(queue) << endl;
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    return 0;
}
