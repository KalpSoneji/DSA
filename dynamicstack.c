#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define STACK_TYPES 3

int intStack[SIZE];
float floatStack[SIZE];
char charStack[SIZE];

int intTop = -1, floatTop = -1, charTop = -1;

void push(int type) {
    
    if (type == 1) {
        if (intTop == SIZE - 1) {
            printf("Integer Stack is Full.\n");
            return;
        }

        printf("Enter Integer Value: ");
        scanf("%d", &intStack[++intTop]);
    } 
    
    else if (type == 2) {
        if (floatTop == SIZE - 1) {
            printf("Float Stack is Full.\n");
            return;
        }

        printf("Enter Float Value: ");
        scanf("%f", &floatStack[++floatTop]);
    } 
    
    else {
        if (charTop == SIZE - 1) {
            printf("Character Stack is Full.\n");
            return;
        }

        printf("Enter Character Value: ");
        scanf(" %c", &charStack[++charTop]);
    }
}

void pop(int type) {
    
    if (type == 1) {
        if (intTop == -1) {
            printf("Integer Stack is Empty.\n");
            return;
        }

        printf("Popped Element: %d\n", intStack[intTop--]);
    } 
    
    else if (type == 2) {
        if (floatTop == -1) {
            printf("Float Stack is Empty.\n");
            return;
        }

        printf("Popped Element: %.2f\n", floatStack[floatTop--]);
    } 
    
    else {
        if (charTop == -1) {
            printf("Character Stack is Empty.\n");
            return;
        }

        printf("Popped Element: %c\n", charStack[charTop--]);
    }
}

void display(int type) {
    
    if (type == 1) {
        if (intTop == -1) {
            printf("Integer Stack is Empty.\n");
            return;
        }

        printf("Integer Stack Elements: ");
        for (int i = intTop; i >= 0; i--) {
            printf("%d\t", intStack[i]);
        }
        printf("\n");
    } 
    
    else if (type == 2) {
        if (floatTop == -1) {
            printf("Float Stack is Empty.\n");
            return;
        }

        printf("Float Stack Elements: ");
        for (int i = floatTop; i >= 0; i--) {
            printf("%.2f\t", floatStack[i]);
        }
        printf("\n");
    } 
    
    else {
        if (charTop == -1) {
            printf("Character Stack is Empty.\n");
            return;
        }

        printf("Character Stack Elements: ");
        for (int i = charTop; i >= 0; i--) {
            printf("%c\t", charStack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, stackType;

    while (1) {
        printf("1. Integer Stack\n2. Float Stack\n3. Character Stack\n4. Exit\n");
        printf("Choose Stack Type: ");
        scanf("%d", &stackType);

        if (stackType == 4) 
            exit(0);

        printf("1. Push\t2. Pop\t3. Display\t4. Exit\n");
        printf("Choose Operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(stackType);
                break;
            case 2:
                pop(stackType);
                display(stackType);
                break;
            case 3:
                display(stackType);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice.\n");
        }
    }
}