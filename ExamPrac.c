#include<stdio.h>
#define SIZE 100 // Define maximum size of stack
void push();
void pop();
void display();

int stack[SIZE];
int top = -1;
int main()
{
    int choice;
    printf("Stack Operations:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
void push()
{
    int data ;
    if(top == SIZE - 1)
    {
        printf("Stack Overflow! Cannot push %d\n", data);
        return;
    }
    printf("Enter the element to push: ");
    scanf("%d", &data);
    top++;
    stack[top] = data;
    printf("Element %d pushed onto stack.\n", data);

}

void pop()
{
    int data;
    if (top == -1)
    {
        printf("Stack Underflow! Cannot pop element.\n");
        return;
    }
    int data = stack[top];
    top--;
    printf("Element %d popped from stack.\n", data);
    return data;
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty! Nothing to display.\n");
        return;
    }
    printf("Stack elements are: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
