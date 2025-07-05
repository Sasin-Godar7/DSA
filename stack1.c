#include <stdio.h>
#include <stdlib.h>

#define Size 4

int arr[Size];
int top = -1;

void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)

    {
        printf("\nStack perform certain operation");
        printf("\n1.Push the element \n2.pop the element \n3.show \n4.exit \n5.end");
        printf("Enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
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
            printf(" invalid choice\n");
            break;
        }
    }
}

void push()
{
    if (top == Size - 1)
    {
        printf("condition overflow cant perform push operation\n ");
    }
    else
    {

        int x;

        printf(" Enter the element to be insert in a stack");
        scanf("%d", &x);
        arr[top] = x;
        // top = top + 1;
    }
}

// performing pop 

void pop()
{
    if (top == -1)
    {
        printf("\n underflow condition cannot perform pop operation");
    }
    else
    {
        printf("\n element to be poped is :\n", arr[top]);

        top = top - 1;
    }
}

// performing display the element from the stack

void show()
{

    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("The pushed elements in the stack are\n");
        for (int i = top; i>0; --i)
        {

            printf("%d\t", arr[i]);
        }
    }
}
