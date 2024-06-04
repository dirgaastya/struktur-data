#include <iostream>
using namespace std;

#define MAX 1000

struct Stack {
    int top;
    int arr[MAX];
};

void initializeStack(Stack& stack) {
    stack.top = -1;
}

bool isFull(Stack& stack) {
    return stack.top >= MAX - 1;
}

bool isEmpty(Stack& stack) {
    return stack.top < 0;
}

void push(Stack& stack, int data) {
    if (isFull(stack)) {
        cout << "Stack overflow: cannot push " << data << endl;
        return;
    }
    stack.arr[++stack.top] = data;
    cout << "Pushed " << data << " onto stack" << endl;
}

int pop(Stack& stack) {
    if (isEmpty(stack)) {
        cout << "Stack underflow: no elements to pop" << endl;
        return -1;
    }
    int poppedData = stack.arr[stack.top--];
    cout << "Popped " << poppedData << " from stack" << endl;
    return poppedData;
}

int peek(Stack& stack) {
    if (isEmpty(stack)) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return stack.arr[stack.top];
}

// Contoh penggunaan Stack
int main() {
    Stack stack;
    initializeStack(stack);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    cout << "Top element is " << peek(stack) << endl;
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    return 0;
}
