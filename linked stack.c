Algorithm

step 1 : Start.
step 2 : initialize the varibales and linked stack as globally.
step 3 : Initialze the functions for each operations.
step 4 : Ask user to select an linked stack operation and call the proper function.
step 5 : 
	5.1 : push()
	Create a node using malloc ,if pointer is null display 'memory not allocated" else ask user to enter value and check where to enter. 
        a)head equals to null then set value into pointer and set pointer next as null also point head to that new node.
        b) else set value to pointer and set pointer next equal to head and set head to pointer.
        5.2 : pop()
        if head equals to null then print "stack underflow" else set pointer to head and pop the item then set head to head next display "item popped".
        5.3 : display()
        If head is null then print the "stack is empty" else Traverse the stack pointer starting from head and print the value of each node in the stack. 
        5.4 : exit()
        Terminate the program.  
step 6 : Print proper result.
step 7 : Stop.

program

#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
  int val;
  struct node *next;
};
struct node *head;
void main ()
{
  int choice=0;
  printf("\n*********Stack operations using linked list*********\n");
  while(choice != 4)
  {
    printf("\nChose one from the below options...\n");
    printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
      {
        case 1:
        {
        push();
        break;
        }
      case 2:
        {
        pop();
        break;
        }
      case 3:
        {
        display();
        break;
        }
      case 4:
        {
        printf("Exiting....");
        break;
        }
      default:
        {
        printf("Please Enter valid choice ");
        }
    }
  }
}
void push ()
{
int value;
struct node *ptr = (struct node*)malloc(sizeof(struct node)); //Dynamically allocates memory
if(ptr == NULL)
	{
	printf("Memory not allocated");
	}
	else
	{
	printf("Enter the value: ");
	scanf("%d",&value);
	if(head==NULL)
	{
	ptr->val = value; 
	ptr-> next = NULL; 
	head=ptr; 
	}
	else
	{
	ptr->val = value;
	ptr->next = head;
	head=ptr; 
	}
	printf("Item pushed");
	}
}
void pop()
{
int item;
struct node *ptr;
if (head == NULL)
	{
	printf("Underflow");
	}
	else
	{
	item = head->val;
	ptr = head;
	head = head->next; 
	free(ptr); 
	printf("Item popped");
	}
}
void display()
{
	int i;
	struct node *ptr;
	ptr=head;
	if(ptr == NULL)
	{
	printf("Stack is empty\n");
	}
	else
	{
	printf("Printing Stack Elements \n");
	while(ptr!=NULL)
		{
		printf("%d\n",ptr->val);
		ptr=ptr->next;
		}
	}
}

