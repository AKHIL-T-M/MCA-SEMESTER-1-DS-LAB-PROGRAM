#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
//create a node
struct node
{
    int val;
    struct node *next;
};
//assign head
struct node *head;

void main()
{
    int choice;
    while(1)
    {
        printf("\nSTACK USING LINKED LIST");
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: printf("\nExiting....!!");
            exit(0);
            break;
            default:printf("\nInvalid choice!!");
            exit(0);
            break;
        }

    }
}

void push()
{
    int value;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nStack is underflow!!");
    }
    else
    {
        printf("\nenter the value: ");
        scanf("%d",&value);
    }
    if(head == NULL)
    {
        ptr->val=value;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        ptr->val=value;
        ptr->next=head;
        head=ptr;
    }
    printf("\nItem pushed");
}

void pop()
{
    int item;
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nstack empty");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\nitem popped");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\nThe stack elements are :");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->val);
            ptr=ptr->next;
        }
    }
}