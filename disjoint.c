#include<stdio.h>
int parent[100],i,n;

void makeset(int n)
{
    for(i=0;i<n;i++)
    {
    parent[i]=i;
    }
}

int find(int x)
{
    if (parent[x] == x) return x;
    else return find(parent[x]);
}

void merge(int x,int y)
{
    parent[find(x)] = find(y);
}

int issameset(int x,int y)
{
    return find(x) == find(y);
}

int main()
{
    makeset(10);
    merge(1,2);
    merge(2,3);
    merge(7,8);
    merge(8,9);
    merge(5,8);
    printf("\n%d",issameset(8,5));
    printf("\n%d",issameset(5,1));
    printf("\n%d",issameset(7,5));
}