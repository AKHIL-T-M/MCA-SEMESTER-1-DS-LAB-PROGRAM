 #include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],f=-1,r=-1,item,i,choice;
int enq();
int deq();
int dis();
void main(){
			printf("circular queue:");
			while(1)
				{
					printf("\n1.enq\n2.deq\n3.dis\n4.exit");
					printf("\nEnter the choices:");
					scanf("%d",&choice);
					switch(choice)
								{
									case 1 :enq();
									break;
									case 2 :deq();
									break;
									case 3:dis();
										break;
									case 4:printf("exiting");
											exit(0);
											break;
									default:printf("Invalid");
											exit(0);
											break;
								}

				}

			}
int enq()
		{
			if((r+1)%max==f)
			{
				printf("\nqueue is full:");
			}
			else
			if(f==-1 && r==-1)
			{
				f++;
				r++;
				printf("\nEnter the element:");
				scanf("%d",&item);
				queue[r]=item;

			}
			else
			{
				r=(r+1)%max;
				printf("\nEnter the element:");
				scanf("%d",&item);
				queue[r]=item;
			}
		}
int deq()
		{
			if(f==-1 && r==-1)
			{
				printf("\nqueue empty");
			}
			else if(f==r)
			{
				printf("\nelement deleted is %d",queue[f]);
				f=-1;
				r=-1;
			}
			else
			{
				printf("\nelement deleted is %d",queue[f]);
				f=(f+1)%max;

			}
		}
int dis()
		{
			if(f==-1 && r==-1)
			{
				printf("\nqueue is empty");
			}
			else
			{
				printf("\nThe queue elements are:");
				for(i=f;i<=r;i=(i+1)%max)
				{
					printf("<--%d",queue[i]);
				}
			}
		}