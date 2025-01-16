#include<stdio.h>
#include<stdlib.h>
int queue[5],size=5,element,item,choice,r=-1,f=-1,i;
int enq();
int deq();
int dis();
void main()
{
	printf("\n QUEUE USING ARRAY");
	while(1)
	{
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1: enq();
			break;
		case 2: deq();
			break;
		case 3: dis();
			break;
		case 4: printf("\nExiting");
			exit(0);
		default:printf("\nInvalid choice");
			exit(0);
		}
	}
}

int enq(){
	if(r==size-1)
	{
		printf("\nqueue is full");
	}
	else if(r==-1 && f==-1)
	{
		printf("\nEnte your element:");
		scanf("%d",&element);
		r++;
		f++;
		queue[r]=element;
	}
	else
	{
		printf("\nEnte your element:");
		scanf("%d",&element);
		r++;
		queue[r]=element;
	}
}
int deq(){
	if(f==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		printf("\nthe deleted element is %d",queue[f]);
		f++;
		if(f>r)
		{
			f=-1; //resting the queue
			r=-1;
		}
	}
}
int dis(){
	if(f==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nthe queue is :");
		for(i=f;i<=r;i++)
		{
			printf("%d",queue[i]);
		}
	}
}