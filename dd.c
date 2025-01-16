#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* prev;
	struct node* next;
};

struct node* createnode(int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=data;
		newnode->next=NULL;
		newnode->prev=NULL;
		return newnode;
}

void insertatbeg(struct node** head)
{
	int data;
	printf("Enter the data");
	scanf("%d",&data);
	struct node* newnode=createnode(data);
	if(*head==NULL)
	{
		*head=newnode;
		return;
	}
	else
	{
		newnode->next=*head;
		(*head)->prev=newnode;
		*head=newnode;
	}
}

void display(struct node* head)
{
	printf("The list is :");
	while(head!=NULL)
	{
		printf("%d<->",head->data);
		head=head->next;
	}printf("NILL");
}

void delete(struct node** head)
{
	int data;
	printf("Enter the element to be deleted:");
	scanf("%d",&data);
	if(*head==NULL)
	{
		printf("list empty");
		return;
	}
	struct node* current=*head;
	while(current!=NULL && current->data!=data)
	{
		current=current->next;
	}
	if(current==NULL)
	{
		printf("value not found");
		return;
	}
	if(current->prev!=NULL)
	{
		current->prev->next=current->next;
	}else{
	*head=current->next;}
	if(current->next!=NULL)
	{
		current->next->prev=current->prev;
	}
	free(current);
	printf("%d deleted",data);

}

void anyposition(struct node** head)
{
	int data,position;
	printf("Enter the element:");
	scanf("%d",&data);
	printf("Enter the position:");
	scanf("%d",&position);
	
	struct node* newnode=createnode(data);
	struct node* current=*head;
	if(position==1)
	{
		newnode->next=current;
		if(current!=NULL)
		{
			current->prev=newnode;
		}
		*head=newnode;
	}
		else
		{
			for(int i=1;i<position-1 && current!=NULL;i++)
			{
				current=current->next;
			}
			if(current==NULL)
			{
				printf("position is not free");
				free(newnode);
				return;
			}
			newnode->next=current->next;
			newnode->prev=current;
			if(current->next!=NULL)
			{
				current->next->prev=newnode;
			}
			current->next=newnode;
		}
	

}

int main() {
    struct node* head = NULL;
	int ch=0;

while(ch != 5) 
{
	printf("1: Insert Begining\n");
	printf("2: Display\n");
	printf("3: Delete\n");
	printf("4: Insert Any Position\n");
	printf("5: Exit\n");
	printf("Enter Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	
    			insertatbeg(&head);
			break;
		case 2:
    			display(head);
			break;
		case 3:
			delete(&head);
			break;
		case 4:
			anyposition(&head);
			break;
		case 5:
			printf("Exiting");
			break;
		default:
			printf("Invalid Choice");
			break;
	}
}

    return 0;
}
