#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void enqueue();
void dequeue();
void display();
void exit();

int front = -1, rear = -1;
int queue[SIZE];

    int main()
{
    int choice;
    while (1)
    {

        printf("Operation perfromed by circular queue\n");
        printf("1.Enqueue \n 2. Dequeue \n 3.Display \n 4.exit\n");
        printf("Enter your choice  :\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;

        default:
            printf("invalid choice\n");
            break;
        }
    }
}

void enqueue()
{
    int data;
    if((rear + 1)%SIZE == front)
    {
        printf("overflow condition!! can't insert data\n");
        return;
    }
    else{
        printf("enter the data to insert :\n");
        scanf("%d",&data);
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else{
        rear=(rear+1)%SIZE ;
    }
    queue[rear]  = data;

}

void dequeue()
{
    if(front ==-1 && rear == -1)
    {
        printf("underflow contition \n");
        return;
    }

    printf("deleted item is %d\n",queue[front]);
    if(front == rear)
    {
        front = rear = -1;
    }
    else{
        front = (front + 1)% SIZE;
    }
}

void display()
{
    int i;
    if(front ==-1 && rear == -1)
    {
        printf("underflow contition !! nothing to display \n");
        return;
    }   
    else
    {
        printf("present queue elements are..\n");
        while( i!=rear)
        {
            printf("%d \t \n",queue[i]);
            i= (i+1)%SIZE;
        }
    }
        // printf("%d",queue[rear]);
        // printf("\n");
  
}
