#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1; 
int stk[SIZE];

void push();
void pop();
void show();

int main() {
    int choice;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                show();
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice!!\n");
        }
    }

    return 0;
}

void push() {
    int x;
    if (top == SIZE - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter the element to be pushed onto the stack: ");
        scanf("%d", &x);
        top += 1;
        stk[top] = x;
        printf("Element %d pushed onto the stack.\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! The stack is empty.\n");
    } else {
        printf("Popped element: %d\n", stk[top]);
        top -= 1;
    }
}

void show() {
    int i;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Elements present in the stack:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stk[i]);
        }
    }
}
