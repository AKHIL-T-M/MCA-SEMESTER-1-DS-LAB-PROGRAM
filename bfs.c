#include<stdio.h>
int q[10],adjmat[10][10],i,j,k,v,visited[10],n,e,f=-1,r=1;
void bfs();
void main()
{
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	printf("Enter the number of edges: ");
	scanf("%d",&e);
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
	}
	printf("Enter the edges:");
	for(k=1;k<=e;k++)
	{
		scanf("%d%d",&i,&j);
		adjmat[i][j]=1;
		adjmat[j][i]=1;
	}
	printf("Ajmatrix :");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",adjmat[i][j]);
		}printf("\n");
	}
	printf("Enter the starting vertex:");
	scanf("%d",&v);
	f=r=0;
	q[r]=v;
	printf("BFS TRAVERSING:");
	visited[v]=1;
	printf("%d",v);
	bfs(v);
	if(r!=n-1)
	printf("BFS NOT POSSIBLE");

}
void bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(adjmat[v][i]==1 && visited[i]==0)
		{
			r++;
			q[r]=i;
			visited[i]=1;
			printf("%d",i);
		}
	}
	f++;
	if(f<=r)
	bfs(q[f]);

}