#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int Q[SIZE];
int front = -1;
int rear = -1;

void insert();
void delete();
void display();

int main(){

    while(1){
        int choice;
        printf("1. Insert\t2. Delete\t3. Display\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3: 
                display();
                break;
            case 4: 
                exit(0);
            default:
                printf("Enter valid choice.\n");
        }

    }

}

void insert(){

    int add;

    if(rear == SIZE - 1)
        printf("Queue is full.\n");
    
    else if(front == -1){
        front = 0;
        rear = 0;
        printf("Enter a value: ");
        scanf("%d", &add);
        Q[rear] = add;
    }

    else{
        rear++;
        printf("Enter a value: ");
        scanf("%d", &add);
        Q[rear] = add;
    }

}

void delete(){
    
    if(front == -1)
        printf("Queue is empty.\n");

    else if(front == rear)
        front = rear = -1;

    else
        front++;

}

void display(){

    int i;

    if(front == -1)
        printf("Queue is empty.\n");

    else
        for(i=front; i<=rear; i++)
            printf("%d ", Q[i]);
        printf("\n");

}