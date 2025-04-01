#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
  int info;
  struct node *next;
};

struct node *start = NULL;

int main()
{
  int choice;
  while (1)
  {
    printf("\n1. Create\n");
    printf("2. Display\n");
    printf("3. Insert at beginning\n");
    printf("4. Insert at end\n");
    printf("5. Insert at position\n");
    printf("6. Delete at beginning\n");
    printf("7. Delete at end\n");
    printf("8. Delete at position\n");
    printf("9. Exit\n");
    printf("------------------------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      create();
      break;
    case 2:
      display();
      break;
    case 3:
      insert_begin();
      break;
    case 4:
      insert_end();
      break;
    case 5:
      insert_pos();
      break;
    case 6:
      delete_begin();
      break;
    case 7:
      delete_end();
      break;
    case 8:
      delete_pos();
      break;
    case 9:
      exit(0);
    default:
      printf("Invalid choice! Please try again.\n");
    }
  }
  return 0;
}

// Creating a linked list
void create()
{
  struct node *newnode, *temp;
  newnode = (struct node *)malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("Memory out of space\n");
    exit(0);
  }

  printf("Enter the data: ");
  scanf("%d", &newnode->info);
  
  if (start == NULL)
  {
    start = newnode;
    newnode->next = NULL;
  }
  else
  {
    temp = start;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
  }
}

// Display linked list
void display()
{
  struct node *temp;
  if (start == NULL)
  {
    printf("List is empty, nothing to display.\n");
    return; // Exit the function gracefully
  }
  temp = start;
  printf("The elements in the linked list are: ");
  while (temp != NULL)
  {
    printf("%d ", temp->info); // Add space to separate elements
    temp = temp->next;
  }
  printf("\n"); // Print a newline after displaying the list
}

// Insert at the beginning
void insert_begin()
{
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("Memory out of space\n");
    exit(0);
  }

  printf("Enter the data: ");
  scanf("%d", &newnode->info);

  if (start == NULL)
  {
    newnode->next = NULL;
    start = newnode;
  }
  else
  {
    newnode->next = start;
    start = newnode;
  }
}

// Insert at the end
void insert_end()
{
  struct node *newnode, *temp;
  newnode = (struct node *)malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("Memory out of space\n");
    exit(0);
  }

  printf("Enter the data: ");
  scanf("%d", &newnode->info);
  newnode->next = NULL;

  if (start == NULL)
  {
    start = newnode;
  }
  else
  {
    temp = start;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}

// Insert at a specific position
void insert_pos()
{
  struct node *newnode, *temp;
  int pos, i;

  newnode = (struct node *)malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("Memory out of space\n");
    exit(0);
  }

  printf("Enter the data: ");
  scanf("%d", &newnode->info);

  printf("Enter the position: ");
  scanf("%d", &pos);

  if (pos < 1)
  {
    printf("Invalid position!\n");
    return;
  }

  if (pos == 1)
  {
    newnode->next = start;
    start = newnode;
  }
  else
  {
    temp = start;
    for (i = 1; temp != NULL && i < pos - 1; i++)
    {
      temp = temp->next;
    }

    if (temp == NULL)
    {
      printf("Position out of range\n");
    }
    else
    {
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }
}

// Delete at the beginning
void delete_begin()
{
  struct node *temp;
  if (start == NULL)
  {
    printf("List is empty\n");
    return;
  }

  temp = start;
  start = start->next;
  free(temp);
  printf("Node deleted from the beginning\n");
}

// Delete at the end
void delete_end()
{
  struct node *temp, *prev;
  if (start == NULL)
  {
    printf("List is empty\n");
    return;
  }

  temp = start;
  if (temp->next == NULL)
  {
    start = NULL;
    free(temp);
    printf("Node deleted from the end\n");
    return;
  }

  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }

  prev->next = NULL;
  free(temp);
  printf("Node deleted from the end\n");
}

// Delete at a specific position
void delete_pos()
{
  struct node *temp, *prev;
  int pos, i;
  
  if (start == NULL)
  {
    printf("List is empty\n");
    return;
  }

  printf("Enter the position: ");
  scanf("%d", &pos);

  if (pos < 1)
  {
    printf("Invalid position!\n");
    return;
  }

  if (pos == 1)
  {
    temp = start;
    start = start->next;
    free(temp);
    printf("Node deleted from position %d\n", pos);
    return;
  }

  temp = start;
  for (i = 1; temp != NULL && i < pos; i++)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL)
  {
    printf("Position out of range\n");
  }
  else
  {
    prev->next = temp->next;
    free(temp);
    printf("Node deleted from position %d\n", pos);
  }
}
// End of the program