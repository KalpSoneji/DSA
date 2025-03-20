#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int Q_i[SIZE];
char Q_c[SIZE];
int front = -1;
int rear = -1;

void insert_i();
void delete_i();
void display_i();
void insert_c();
void delete_c();
void display_c();
void integer();
void character();

int main(){

    int type;
    start:
    printf("Enter 0 for integer and 1 for character: ");
    scanf("%d", &type);

    if(type == 0)
        integer();

    else if(type == 1)
        character();
    
}

void integer(){    
    while(1){
    int choice;
    printf("1. Insert\t2. Delete\t3. Display\t4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            insert_i();
            break;
        case 2:
            delete_i();
            break;
        case 3: 
            display_i();
            break;
        case 4: 
            exit(0);
        default:
            printf("Enter valid choice.\n");
        }

    }

}

void insert_i(){

    int add;

    if(rear == SIZE - 1)
        printf("Queue is full.\n");
    
    else if(front == -1){
        front = 0;
        rear = 0;
        printf("Enter a value: ");
        scanf("%d", &add);
        Q_i[rear] = add;
    }

    else{
        rear++;
        printf("Enter a value: ");
        scanf("%d", &add);
        Q_i[rear] = add;
    }

}

void delete_i(){
    
    if(front == -1)
        printf("Queue is empty.\n");

    else if(front == rear)
        front = rear = -1;

    else
        front++;

}

void display_i(){

    int i;

    if(front == -1)
        printf("Queue is empty.\n");

    else
        for(i=front; i<=rear; i++)
            printf("%d ", Q_i[i]);
        printf("\n");

}

void character(){    
    while(1){
    int choice;
    printf("1. Insert\t2. Delete\t3. Display\t4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);

    switch(choice){
        case 1:
            insert_c();
            break;
        case 2:
            delete_c();
            break;
        case 3: 
            display_c();
            break;
        case 4: 
            exit(0);
        default:
            printf("Enter valid choice.\n");
        }

    }

}

void insert_c(){

    char add_c;

    if(rear == SIZE - 1)
        printf("Queue is full.\n");
    
    else if(front == -1){
        front = 0;
        rear = 0;
        printf("Enter a value: ");
        fflush(stdin);
        scanf("%c", &add_c);
        Q_c[rear] = add_c;
    }

    else{
        rear++;
        printf("Enter a value: ");
        scanf("%c", &add_c);
        Q_c[rear] = add_c;
    }

}

void delete_c(){
    
    if(front == -1)
        printf("Queue is empty.\n");

    else if(front == rear)
        front = rear = -1;

    else
        front++;

}

void display_c(){

    int i;

    if(front == -1)
        printf("Queue is empty.");

    else
        for(i=front; i<=rear; i++)
            printf("%c ", Q_c[i]);
        printf("\n");

}
    
    