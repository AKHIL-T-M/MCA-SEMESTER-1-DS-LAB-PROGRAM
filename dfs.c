#include<stdio.h>
int stk[10],adjmat[10][10],v,visited[10],top,i,j,k,e,n;

void dfs();
void main()
{
 printf("\nEnter the graph vertex:");
 scanf("%d",&n);
 printf("\nEnter the graph edge:");
 scanf("%d",&e);

 printf("\nEnter the edge:");
 for(k=1;k<=e;k++)
 {
 	scanf("%d %d",&i,&j);
 	adjmat[i][j]=1;
 	adjmat[j][i]=1;
 }
 printf("\nprint the matrix:");
 for(i=1;i<=n;i++)
 {
 	for(j=1;j<=n;j++)
 	{
 		printf("%d",adjmat[i][j]);
 	}printf("\n");
 }

for(i=0;i<n;i++)
visited[i]=0;
top=-1;
dfs();
}
void dfs()
{
	printf("Enter the starting vertex: ");
	scanf("%d",&v);
	top++;
	stk[top]=v;
	while(top>=0)
	{
		v=stk[top];
		top--;
		if(visited[v]==0)
		{
			printf("%d",v);
			visited[v]=1;
		}
			for(i=n;i>=1;i--)
			{
				if(adjmat[v][i]==1 && visited[i]==0)
				{
					top++;
					stk[top]=i;
				}
	}		}

}