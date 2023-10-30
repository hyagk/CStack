#include <stdio.h>

#define MAX_SIZE 3
int stack[MAX_SIZE];
int top = -1; 


void push(int value) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = value;
    }
    else {
        printf("Stack is full. Cannot push %d\n", value);
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    else {
        printf("Stack is empty. Cannot pop.\n");
        return -1; 
    }
}

int main() {
    push(1);
    push(2);
    push(3);

    int poppedValue1 = pop();
    int poppedValue2 = pop();
    int poppedValue3 = pop();

    printf("Popped values: %d, %d, %d\n", poppedValue1, poppedValue2, poppedValue3);

    return 0;
}