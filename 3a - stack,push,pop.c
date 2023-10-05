#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define SIZE 4

int top = 0, stk[SIZE];
void push();
void pop();
void show();


int main()
{
    int choice;
    // clrscr();
    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        switch(choice){
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
                printf("\n\nInvalid choice!!\n\n");
        }
    }
}


void push(){
    int x;
    if(top == SIZE){
        printf("OVERFLOW!!!");
    }
   
    else{
        printf("\nEnter the element to be added to the stack: ");
        scanf("%d", &x);
        top+=1;
        stk[top] = x;
    }
}


void pop(){
    if(top == 0){
        printf("\nUNDERFLOW!!!");
    }
    else{
        printf("\nPopped element: %d", stk[top]);
        top-=1;
    }
}


void show(){
    int i;
    if(top == 0){
        printf("\nUNDERFLOW!!!");
    }
    else{
        printf("\nElements present in the stack: \n");
        for(i = top; i > 0; i--){
            printf("%d\n", stk[i]);
        }
    }
}
