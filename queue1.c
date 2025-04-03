#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void exit();

int front = -1 , rear = -1;
int queue[5];

int main()
{
    int choice;
    

    while (choice!=4)
    {
        printf("\n linear queue operation \n");
        printf("\n 1. inserting the data \n 2.deletion of the data \n 3.display the data \n 4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);

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
        printf("\nenter the valid choice\n");
            break;
        }

    } 
  }  // end of while loop 

    void enqueue()
     {
       int item;
       if(rear > 5-1)
       {
        printf("  ❌ overflow so cant insert the data in the queue!!! \n");
       }
       else
       {
        printf("enter the item to insert \n");
       scanf("%d",&item);
       }
       if(front ==-1 || rear == -1)
       {
        front = 0;
       } 

       else {
        rear = rear + 1;
       }

       queue[rear] = item;
       printf("\nvalue inserted sucessfully!!! \n");
    }


    void dequeue()
    {
        int item;
        if(front == -1 || rear == -1)
        {
            printf("\nUnderflow condition happen here !! \n");
            return ;
        }

        else{
            item = queue[front];
        }

        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = front + 1;
        }
        printf("\n deleted value is %d",item);
    }

    void display()
    {
        int i;
        if(rear == -1)
        {
            printf("\n empty  queuen\n" );
        }
        else{
            printf("\n printing the values\n ");
        }
        for(i=front;i<=rear ;i++)
        {
            printf("\n%d\t",queue[i]);
        }
    }