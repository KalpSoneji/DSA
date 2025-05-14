#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int num){
    top++;
    stack[top] = num;
}

void pop(){
    printf("Popped element: %d\n", stack[top]);
    top--;
}

void display(){
    
    int i;

    for(i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
    
}

int main(){

    push(10);
    push(20);
    push(30);
    pop();
    pop();
    push(50);
    display();

}