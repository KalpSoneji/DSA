#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, stack[5], top = -1;

    while (1) {

        printf("1. Push\t2. Pop\t3. Display\t4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                if (top == 4)
                    printf("Stack is full. Cannot push more elements.\n");
                 
                else{
                    printf("Enter element you wanna push: ");
                    scanf("%d", &stack[++top]);
                }
                break;

            case 2:
                if (top == -1) 
                    printf("Stack is empty. Cannot pop elements.\n");
                
                else
                    printf("Popped element: %d\n", stack[top--]);
                
                break;

            case 3:
                if (top == -1)
                    printf("Stack is empty.\n");
                
                else{
                    printf("Stack elements: ");
                    for (int i = 0; i <= top; i++)
                        printf("%d ", stack[i]);
                    
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting...");
                exit(0);

            default:
                printf("Enter a valid choice.\n");
        }
    }

    return 0;
}